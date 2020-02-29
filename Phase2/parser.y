%{
#include "Table.h"

int yyerror (char* yaccProvidedMessage);
int yylex(void);
extern int yylineno;
	extern char* yytext;
	extern FILE* yyin;
	extern FILE* yyout;
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

program: stmts {printf("program->stmts\n");}
	| {printf("program->\n");}
	;
	
stmts:stmts stmt{printf("stmts->stmts stmt\n");}
      |stmt {printf("stmts->stmt\n");}
      ;
stmt : expr SEMICOLON {printf("stmt->expr SEMICOLON\n");}

expr :term {printf("expr->term\n");}

term :primary {printf("term->primary\n");}

primary:lvalue {printf("primary->lvalue\n");}

lvalue:ID  {printf("lvalue->ID:%s\n",$1);}

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
    yyparse();
    return 0;
}





