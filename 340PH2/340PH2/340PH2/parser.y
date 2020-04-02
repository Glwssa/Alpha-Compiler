%{
#include "Table.h"

int yyerror (char* yaccProvidedMessage);
int yylex(void);
extern int yylineno;
	extern char* yytext;
	extern FILE* yyin;
	extern FILE* yyout;
int scope=0;
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

%left EQUAL_OP
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

program: stmts stmt {printf("program->stmts stmt\n");}
	| {printf("program->\n");}
	;
	
stmts:stmts stmt{printf("stmts->stmts stmt\n");}
      | {printf("stmts-> \n");}
      ;


stmt : expr SEMICOLON {printf("stmt->expr;\n");}
      |ifstmt {printf("stmt->ifstmt\n");}    
      |whilestmt {printf("stmt->whilestmt\n");}
      |forstmt   {printf("stmt->forstmt\n");}
      |returnstmt {printf("stmt->returnstmt\n");}
      |BREAK_ST SEMICOLON {printf("stmt->break;\n");}
      |CONTINUE_ST SEMICOLON {printf("stmt->continue;\n");}
      |block {printf("stmt->block\n");}
      |funcdef {printf("stmt->funcdef\n");}
      |SEMICOLON {printf("stmt->;\n");}
      ;

expr	:assignexpr  {printf("expr->assignexpr \n");}
	|expr PLUS_OP expr {printf("expr+expr\n");}
	|expr MINUS_OP expr {printf("expr-expr\n");}
	|expr MULTI_OP expr {printf("expr*expr\n");}
	|expr DIVISION_OP expr {printf("expr/expr\n");}
	|expr PERCENT_OP expr {printf("expr%expr\n");}
	|expr COMP_BIGGER_OP expr {printf("expr>expr\n");}
	|expr COMP_BIGGER_EQUAL_OP expr {printf("expr>=expr\n");}
	|expr COMP_LESS_OP expr {printf("expr<expr\n");}
    	|expr COMP_LESS_EQUAL_OP expr {printf("expr<=expr\n");}
    	|expr COMP_EQUAL_OP expr {printf("expr==expr\n");}
    	|expr COMP_NOT_EQUAL_OP expr {printf("expr!=expr\n");}
    	|expr AND_ST expr {printf("expr and expr\n");}
    	|expr OR_ST expr {printf("expr or expr\n");}
	|term {printf("expr->term\n");}
	;

term: LEFT_PARENTHESIS expr RIGHT_PARENTHESIS{printf("term->(expr)\n");}
    | NOT_ST expr	{printf("term->!expr\n");}
    | INCREMENT_OP lvalue  {printf("term-> ++lvalue\n");}
    | lvalue INCREMENT_OP  {printf("term-> lvalue++\n");}
    | DICREMENT_OP lvalue  {printf("term-> --lvalue\n");}
    | lvalue DICREMENT_OP {printf("term-> lvalue--\n");}
    | MINUS_OP expr %prec UMINUS  {printf("term-> -expr UMINUS\n");}
    | primary  {printf("term->primary\n");}
    ;

assignexpr:lvalue EQUAL_OP expr{printf("lvalue=expr");}
	  ;

primary: lvalue {printf("primary->lvalue\n");}
		| call  {printf("primary->call\n");}
		| objectdef {printf("primary->objectdef\n");}
		| LEFT_PARENTHESIS funcdef RIGHT_PARENTHESIS {printf("primary->(funcdef)\n");}
		| const	{printf("primary->const\n");}
		;

lvalue:	ID {LookUpVariable(scope,$1,yylineno); printf("lvalue->ID\n");}
		| LOCAL_ST ID {	LookUpLocal($2,scope,yylineno);
		  printf("lvalue->local ID\n");}
		| DOUBLE_COLON ID {LookUpGlobal($2,yylineno); printf("lvalue->:: ID\n");}
		| member{printf("lvalue->member\n");}
		;
		
member:lvalue FULL_STOP ID {printf("member->lvalue.ID\n");}
	  | lvalue LEFT_ARRAY expr RIGHT_ARRAY {printf("member->lvalue[expr]\n");}
	  | call FULL_STOP ID	{printf("member->call.ID\n");}
      	  | call LEFT_ARRAY expr RIGHT_ARRAY 	{printf("member->call[expr]\n");}
          ;

call : call LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("call->call(elist)\n");}
	 | lvalue callsuffix	{printf("call->lvalue callsuffix\n");}
	 | LEFT_PARENTHESIS funcdef RIGHT_PARENTHESIS LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("call->(funcdef)(elist)\n");}
	 ;

callsuffix: normcall {printf("callsuffix->normcall\n");}
	 | methodcall    {printf("callsuffix->methodcall\n");}
	 ;

normcall:LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("normcall->(elist)\n");}

methodcall: RANGE ID LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("methodcall->..id(elist)");}

elist:expr exprs {printf("elist->expr exprs\n");}
	 |   {printf("elist->expr exprs\n");}
	 ;
	 
exprs:COMMA expr exprs {printf("exprs->COMMA expr epxrs \n");}
	 |  {printf("exprs->   \n");}
	 ;

objectdef:LEFT_ARRAY elist RIGHT_ARRAY {printf("objectdef->[elist]\n");}
         |LEFT_ARRAY indexed RIGHT_ARRAY {printf("objectdef->[indexed]]\n");}
	 ;
indexed:indexedelem indexedelems {printf("indexed->indexedelem indexedelems\n");}
       ;
 	   
		
indexedelems	: COMMA indexedelem indexedelems	{fprintf(yyout,"lindexedelems ==> ,indexedelem *\n");}
				| /*empty*/		{fprintf(yyout,"lindexedelems ==> empty\n");}
				;	
indexedelem :LEFT_CBRACKET expr COLON expr LEFT_CBRACKET {printf("indexedelem ->{ expr : expr }\n");}
             ;
block:LEFT_CBRACKET  { ++scope;} RIGHT_CBRACKET {Hide(scope--); printf("block->{}\n");}
     |LEFT_CBRACKET { ++scope;}  stmts RIGHT_CBRACKET {Hide(scope--); printf("block->{stmts}\n");}
     ;

funcdef:  FUNC_ST {insert(3,"$f",scope,yylineno);} LEFT_PARENTHESIS {++scope;} idlist RIGHT_PARENTHESIS {scope--;} block {printf("funcdef  function (idlist) block\n");}
       |  FUNC_ST  ID {LookUpFunction(scope,$2,yylineno);} LEFT_PARENTHESIS {++scope;} idlist  RIGHT_PARENTHESIS  {scope--;}block { printf("funcdef  function (idlist) block\n");}
       ;

const:NUMBER{printf("const->NUMBER\n");}
     |STRING {printf("const->STRING\n");}
     |TRUE_ST {printf("const->TRUE\n");}
     |FALSE_ST  {printf("const->FALSE\n");}
     |NIL_ST     {printf("const->NIL\n");}
     ;
idlist:ID {LookUpFormal($1 ,yylineno,scope);} IDS {printf("idlist->ID ID\n");}
	 | {printf("idlist-> \n");}
	 ;
	 
IDS:COMMA ID {LookUpFormal($2 ,yylineno,scope);} IDS {printf("IDS->COMMA ID IDS\n");}
	 | {printf("IDS-> \n");}
	 ;
ifstmt:IF_ST LEFT_PARENTHESIS expr RIGHT_PARENTHESIS stmt {printf("ifstmt->(expr) stmt \n");}
       |IF_ST LEFT_PARENTHESIS expr RIGHT_PARENTHESIS stmt  ELSE_ST stmt {printf("ifstmt->if (expr) stmt else stmt \n");}
       ;
whilestmt : WHILE_ST LEFT_PARENTHESIS expr RIGHT_PARENTHESIS stmt  {printf("whilestmt->while ( expr ) stmt\n");}

forstmt:     	FOR_ST LEFT_PARENTHESIS elist SEMICOLON expr SEMICOLON elist RIGHT_PARENTHESIS stmt {printf("forstmt->for (elist;expr;elist) stmt");}
             	; 

returnstmt:RETURN_ST SEMICOLON {printf("returnstmt->return ;\n");}
          |RETURN_ST expr SEMICOLON {printf("returnstmt->return expr;\n");}
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
    InitHash();
    yyparse();
   // display();
    PrintScopes();
    
    return 0;
}





