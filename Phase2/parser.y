%{
#include "Table.h"

int yyerror (char* yaccProvidedMessage);
int yylex(void);
extern int yylineno;
	extern char* yytext;
	extern FILE* yyin;
	extern FILE* yyout;
int scope=0;
int pnum=0;
int FlagScopeFormal=0;
%}

%start program

%token IF_ST
%token ELSE_ST
%token FOR_ST
%token WHILE_ST
%token AND_ST
%token NOT_ST
%token OR_ST
%token LOCAL_ST
%token CONTINUE_ST
%token BREAK_ST
%token TRUE_ST
%token FALSE_ST
%token NIL_ST
%token FUNC_ST
%token RETURN_ST

%token PLUS_OP
%token MINUS_OP
%token EQUAL_OP
%token MULTI_OP
%token DIVISION_OP
%token PERCENT_OP
%token INCREMENT_OP
%token DICREMENT_OP

%token COMP_EQUAL_OP
%token COMP_NOT_EQUAL_OP
%token COMP_BIGGER_OP
%token COMP_LESS_OP
%token COMP_BIGGER_EQUAL_OP
%token COMP_LESS_EQUAL_OP

%token NUMBER


%token STRING

%token LEFT_CBRACKET
%token RIGHT_CBRACKET
%token LEFT_PARENTHESIS
%token RIGHT_PARENTHESIS
%token SEMICOLON
%token COMMA
%token COLON
%token DOUBLE_COLON
%token FULL_STOP
%token RANGE
%token LEFT_ARRAY
%token RIGHT_ARRAY

%token<strVal> ID

%token COMMENT
%token COMMENT1

%token SPACE

%token OTHER
%token OTHER2
%token OTHER3
%token OTHER4

%union{
int intVal;
double doubleVal;
char*  strVal;
}

%right EQUAL_OP
%left OR_ST
%left AND_ST
%nonassoc COMP_EQUAL_OP COMP_NOT_EQUAL_OP
%nonassoc COMP_BIGGER_OP COMP_LESS_OP COMP_BIGGER_EQUAL_OP COMP_LESS_EQUAL_OP
%left  PLUS_OP MINUS_OP
%left  MULTI_OP DIVISION_OP PERCENT_OP
%right INCREMENT_OP DICREMENT_OP UMINUS NOT_ST
%left  FULL_STOP    RANGE
%left  LEFT_ARRAY  RIGHT_ARRAY
%left  LEFT_PARENTHESIS  RIGHT_PARENTHESIS



%%

program: stmts stmt {printf("(%d)(program->stmts stmt)\n",++pnum);}
	    | {printf("(%d)(program->   )\n",++pnum);}
	;
	
stmts:stmts stmt{printf("(%d)(stmts->stmts stmt)\n",++pnum);}
      | {printf("(%d)(stmts->    )\n",++pnum);}
      ;


stmt : expr SEMICOLON {printf("(%d)(stmt->expr;)\n",++pnum);}
      |ifstmt {printf("(%d)(stmt->ifstmt\n)",++pnum);}    
      |whilestmt {printf("(%d)(stmt->whilestmt\n,++pnum)");}
      |forstmt   {printf("(%d)(stmt->forstmt)\n",++pnum);}
      |returnstmt {printf("(%d)(stmt->returnstmt)\n",++pnum);}
      |BREAK_ST SEMICOLON {printf("(%d)(stmt->break;)\n",++pnum);}
      |CONTINUE_ST SEMICOLON {printf("(%d)(stmt->continue;)\n",++pnum);}
      |block {printf("(%d)(stmt->block)\n",++pnum);}
      |funcdef {printf("(%d)(stmt->funcdef)\n",++pnum);}
      |SEMICOLON {printf("(%d)(stmt->;)\n",++pnum);}
      ;

expr	:assignexpr  {printf("(%d)(expr->assignexpr)\n",++pnum );}
	    |expr PLUS_OP expr {printf("(%d)(expr+expr)\n",++pnum );}
	    |expr MINUS_OP expr {printf("(%d)(expr-expr)\n",++pnum);}
	    |expr MULTI_OP expr {printf("(%d)(expr*expr)\n",++pnum);}
	    |expr DIVISION_OP expr {printf("(%d)(expr/expr)\n",++pnum);}
	    |expr PERCENT_OP expr {printf("(%d)(expr%expr)\n",++pnum);}
	    |expr COMP_BIGGER_OP expr {printf("(%d)(expr>expr)\n",++pnum);}
	    |expr COMP_BIGGER_EQUAL_OP expr {printf("(%d)(expr>=expr)\n",++pnum);}
	    |expr COMP_LESS_OP expr {printf("(%d)(expr<expr)\n",++pnum);}
    	|expr COMP_LESS_EQUAL_OP expr {printf("(%d)(expr<=expr)\n",++pnum);}
    	|expr COMP_EQUAL_OP expr {printf("(%d)(expr==expr)\n",++pnum);}
    	|expr COMP_NOT_EQUAL_OP expr {printf("(%d)(expr!=expr)\n",++pnum);}
    	|expr AND_ST expr {printf("(%d)(expr and expr)\n",++pnum);}
    	|expr OR_ST expr {printf("(%d)(expr or expr)\n",++pnum);}
	    |term {printf("(%d)(expr->term)\n",++pnum);}
	;

term: LEFT_PARENTHESIS expr RIGHT_PARENTHESIS{printf("(%d)( term->(expr) )\n",++pnum);}
    | MINUS_OP expr %prec UMINUS  {printf("(%d)(term-> -expr UMINUS)\n",++pnum);}
    | NOT_ST expr	{printf("(%d)(term->!expr)\n",++pnum);}
    | INCREMENT_OP lvalue  {printf("(%d)(term-> ++lvalue)\n",++pnum);}
    | lvalue INCREMENT_OP  {printf("(%d)(term-> lvalue++)\n",++pnum);}
    | DICREMENT_OP lvalue  {printf("(%d)(term-> --lvalue)\n",++pnum);}
    | lvalue DICREMENT_OP {printf("(%d)(term-> lvalue--)\n",++pnum);}
    | primary  {printf("(%d)(term->primary)\n",++pnum);}
    ;

assignexpr:lvalue EQUAL_OP expr{printf("(%d)(lvalue=expr)\n",++pnum);}
	  ;

primary: lvalue {printf("(%d)(primary->lvalue)\n",++pnum);}
		| call  {printf("(%d)(primary->call)\n",++pnum);}
		| objectdef {printf("(%d)(primary->objectdef)\n",++pnum);}
		| LEFT_PARENTHESIS funcdef RIGHT_PARENTHESIS {printf("(%d)(primary->(funcdef) )\n",++pnum);}
		| const	{printf("(%d)(primary->const)\n",++pnum);}
		;

lvalue:	ID {LookUpVariable(scope,$1,yylineno); printf("(%d)(lvalue->ID:%s)\n",++pnum,$1);}
		| LOCAL_ST ID {	LookUpLocal($2,scope,yylineno);
		  printf("(%d)(lvalue->local ID)\n",++pnum);}
		| DOUBLE_COLON ID {LookUpGlobal($2,yylineno); printf("(%d)(lvalue->:: ID)\n",++pnum);}
		| member{printf("(%d)(lvalue->member)\n",++pnum);}
		;
		
member:lvalue FULL_STOP ID {printf("(%d)(member->lvalue.ID)\n",++pnum);}
	  | lvalue LEFT_ARRAY expr RIGHT_ARRAY {printf("(%d)(member->lvalue[expr])\n",++pnum);}
	  | call FULL_STOP ID	{printf("(%d)(member->call.ID)\n",++pnum);}
      	  | call LEFT_ARRAY expr RIGHT_ARRAY 	{printf("(%d)(member->call[expr])\n",++pnum);}
          ;

call : call LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("(%d)(call->call(elist) )\n",++pnum);}
	 | lvalue callsuffix	{printf("(%d)(call->lvalue callsuffix)\n",++pnum);}
	 | LEFT_PARENTHESIS funcdef RIGHT_PARENTHESIS LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("(%d)(call->(funcdef)(elist) )\n",++pnum);}
	 ;

callsuffix: normcall {printf("(%d)(callsuffix->normcall)\n",++pnum);}
	 | methodcall    {printf("(%d)(callsuffix->methodcall)\n",++pnum);}
	 ;

normcall:LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("(%d)(normcall->(elist) )\n",++pnum);}

methodcall: RANGE ID LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("(%d)(methodcall->..id(elist) )\n",++pnum);}

elist:expr exprs {printf("(%d)(elist->expr exprs)\n",++pnum);}
	 |   {printf("(%d)(elist->  )\n",++pnum);}
	 ;
	 
exprs:COMMA expr exprs {printf("(%d)(exprs->COMMA expr epxrs) \n",++pnum);}
	 |  {printf("(%d)(exprs->   )\n",++pnum);}
	 ;

objectdef:LEFT_ARRAY elist RIGHT_ARRAY {printf("(%d)(objectdef->[elist])\n",++pnum);}
         |LEFT_ARRAY indexed RIGHT_ARRAY {printf("(%d)(objectdef->[indexed]])\n",++pnum);}
	       ;
indexed:indexedelem indexedelems {printf("(%d)(indexed->indexedelem indexedelems)\n",++pnum);}
         ;  
         
 	   
		
indexedelems	: COMMA indexedelem indexedelems	{printf("(%d)(indexedelems-> ,indexedelem indexedelems)\n",++pnum);}
				| /*empty*/		{printf("(%d)(indexedelems->  )\n",++pnum);}
				;	

indexedelem :LEFT_CBRACKET expr COLON expr LEFT_CBRACKET {printf("(%d)(indexedelem ->{ expr : expr })\n",++pnum);}
             ;
block:LEFT_CBRACKET { ++scope;}  stmts RIGHT_CBRACKET {Hide(scope--); printf("(%d)(block->{stmts})\n",++pnum);}
     ;

funcdef:  FUNC_ST {insert(3,"$f",scope,yylineno);} LEFT_PARENTHESIS {++scope;} idlist RIGHT_PARENTHESIS {scope--;} block {printf("(%d)(funcdef->function (idlist) block)\n",++pnum);}
       |  FUNC_ST  ID {LookUpFunction(scope,$2,yylineno);} LEFT_PARENTHESIS {++scope;} idlist  RIGHT_PARENTHESIS  {scope--;}block { printf("(%d)(funcdef->function (idlist) block )\n",++pnum);}
       ;

const:NUMBER{printf("(%d)(const->NUMBER)\n",++pnum);}
     |STRING {printf("(%d)(const->STRING)\n",++pnum);}
     |TRUE_ST {printf("(%d)(const->TRUE)\n",++pnum);}
     |FALSE_ST  {printf("(%d)(const->FALSE)\n",++pnum);}
     |NIL_ST     {printf("(%d)(const->NIL)\n",++pnum);}
     ;
idlist:ID {LookUpFormal($1 ,yylineno,scope);} IDS {printf("(%d)(idlist->ID IDS)\n",++pnum);}
	 | {printf("(%d)(idlist-> )\n",++pnum);}
	 ;
	 
IDS:COMMA ID {LookUpFormal($2 ,yylineno,scope);} IDS {printf("(%d)(IDS->COMMA ID IDS)\n",++pnum);}
	 | {printf("(%d)(IDS-> )\n",++pnum);}
	 ;
ifstmt:IF_ST LEFT_PARENTHESIS expr RIGHT_PARENTHESIS stmt {printf("(%d)(fstmt->(expr) stmt )\n",++pnum);}
       |IF_ST LEFT_PARENTHESIS expr RIGHT_PARENTHESIS stmt  ELSE_ST stmt {printf("(%d)(ifstmt->if (expr) stmt else stmt ) \n",++pnum);}
       ;
whilestmt : WHILE_ST LEFT_PARENTHESIS expr RIGHT_PARENTHESIS stmt  {printf("(%d)(whilestmt->while ( expr ) stmt ) \n",++pnum);}

forstmt:     	FOR_ST LEFT_PARENTHESIS elist SEMICOLON expr SEMICOLON elist RIGHT_PARENTHESIS stmt {printf("(%d)(forstmt->for (elist;expr;elist) stmt )\n",++pnum);}
             	; 

returnstmt:RETURN_ST SEMICOLON {printf("(%d)(returnstmt->return ;)\n",++pnum);}
          |RETURN_ST expr SEMICOLON {printf("(%d)(returnstmt->return expr;)\n",++pnum);}
          ;



%%

int yyerror (char* yaccProvidedMessage)
{
        fprintf(stderr, "%s: at line %d, before token: '%s'\n", yaccProvidedMessage, yylineno, yytext);
}



int main(int argc,char** argv)
{
  if(argc>1){
   if(!(yyin=fopen(argv[1],"r"))){  
      fprintf(stderr,"Cannot read file:%s\n",argv[1]);
      return 1;
   }
  }else{
    yyin=stdin;
  }

    printf("--------------------            Syntax Analysis         --------------------\n");
   // InitHash();
    yyparse();
   // display();
    //PrintScopes();
    
    return 0;
}





