%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int x=666;
int token=0;
int count = 0;



%}

%option header-file="./scanner"
%option noyywrap
%option yylineno
%option case-insensitive 


IF_ST "if"
ELSE_ST "else"
FOR_ST "for"
WHILE_ST "while"
AND_ST "and"
NOT_ST "not"
OR_ST "or"
LOCAL_ST "local"
CONTINUE_ST "continue"
BREAK_ST "break"
TRUE_ST "true"
FALSE_ST "false"
NILL_ST "nill"
FUNC_ST "function"
RETURN_ST "return"

PLUS_OP "+"
MINUS_OP "-"
EQUAL_OP "="
MULTI_OP "*"
DIVISION_OP "/"
PERCENT_OP "%"
INCREMENT_OP "++"
DICREMENT_OP "--"

COMP_EQUAL_OP "=="
COMP_NOT_EQUAL_OP "!="
COMP_BIGGER_OP ">"
COMP_LESS_OP "<"
COMP_BIGGER_EQUAL_OP ">="
COMP_LESS_EQUAL_OP "<="

NUMBER_INT [0-9]+

NUMBER_REAL [0-9]+"."[0-9]+

STRING \"

LEFT_CBRACKET "{"
RIGHT_CBRACKET "}"
LEFT_PARENTHESIS "("
RIGHT_PARENTHESIS ")"
SEMICOLON ";"
COMMA ","
COLON ":"
DOUBLE_COLON "::"
FULL_STOP "."
RANGE ".."

ID [a-zA-Z][a-zA-Z0-9]*

COMMENT  "//".*

COMMENT1 "/*"

SPACE  [\n\r \v\t]
%%
{NUMBER_INT}     {printf("%d:   #%d     \"%s\"  INTCONST %s <-integer \n",yylineno,++token,yytext,yytext);}
{NUMBER_REAL}     {printf("%d:   #%d     \"%s\"  REALCONST %s <-real \n",yylineno,++token,yytext,yytext);}

{STRING}     {

		char *Stoken=(char*)malloc(sizeof(char));
		int c;
		int key=0;
		while((c=input())!=EOF)
		{
 			if(c=='"'){
				 Stoken=realloc(Stoken,(key+1) * (sizeof(char)));
				 Stoken[key++]='\0';		
				 break;
			}
			if(c=='\\') 
			{
			  c=input();
 				  if(c!=EOF){
					if	(c=='n'){
					  	Stoken=realloc(Stoken,(key+1) * (sizeof(char)));
						Stoken[key++]='\n';
					}else if (c=='t'){
						Stoken=realloc(Stoken,(key+1) * (sizeof(char)));
						Stoken[key++]='\t';
					}else if (c=='\\'){
						Stoken=realloc(Stoken,(key+1) * (sizeof(char)));
						Stoken[key++]='\\';
					}else if(c=='\"'){
						Stoken=realloc(Stoken,(key+1) * (sizeof(char)));
						Stoken[key++]='\"';
					}else{

						 Stoken=realloc(Stoken,(key+1) * (sizeof(char)));
						 Stoken[key++]='\\';
						 Stoken=realloc(Stoken,(key+1) * (sizeof(char)));
						 Stoken[key++]=c;

						 printf("\033[0;31m");
						 printf("Invalid escape character:%c\n",c);
						 printf("\033[0m");
					}
				  }
			}else{
			Stoken=realloc(Stoken,(key+1) * (sizeof(char)));
			Stoken[key++]=c;
			}
		}

		if(c==EOF){
  			 printf("\033[0;31m");
		  	 printf("Unterminated string\n");
			 printf("\033[0m");
		}else{
			 printf("%d:   #%d     \"%s\"  STRING %s <-char* \n",yylineno,++token,Stoken,Stoken);
		}
}

{ID}		{	printf("%d:     #%d     \"%s\" ID  \"%s\" <-char*\n",yylineno,++token,yytext,yytext); }

{COMMENT} {
           printf("%d:   #%d	%s      COMMENT LINE_COMMENT <-enumarated \n",yylineno,++token,yytext);
}

{COMMENT1} {
       int firstline=yylineno;
       int lastline=1;
       int c;
       int left_counter=1;
       int right_counter=0;
       int balance=1;
       while((c=input())!=EOF)
       {
	        	if(balance==0)break;
 			if(c=='/'){
	 			if((c=input())=='*') left_counter++;
				else if(c=='/'){unput(c);}
				else{}
			}else  if(c=='*'){
				if((c=input())=='/') right_counter++;
				else if(c=='*'){unput(c);}
                                else{}

			}else{
			}
			balance=left_counter-right_counter;
			lastline=yylineno;
       }
	
	 if(c==EOF){
                         printf("\033[0;31m");
                         printf("Unterminated comment\n");
                         printf("\033[0m");
         }else{
			 
                         printf("%d:   #%d     \"%d-%d\"  COMMENT BLOCK_COMMENT <-enumarated \n",firstline,++token,firstline,lastline);
        		 int j=1;
			 while(j<right_counter)
			 {
				 printf("%d:   #%d     \"%d-%d\"  COMMENT NESTED_COMMENT:%d <-enumarated \n",firstline,++token,firstline,lastline,j);
				 j++;
			 } 
	}



	
      printf("Left:%d,Right:%d\n",left_counter,right_counter);
}

{SPACE}		{}

{IF_ST}		{insert(yylineno,++count,yytext,"")}
{ELSE_ST}	{insert(yylineno,++count,yytext,"")}
{FOR_ST}	{insert(yylineno,++count,yytext,"")}
{WHILE_ST}	{insert(yylineno,++count,yytext,"")}
{AND_ST}	{insert(yylineno,++count,yytext,"")}
{NOT_ST}	{insert(yylineno,++count,yytext,"")}
{OR_ST}		{insert(yylineno,++count,yytext,"")}
{LOCAL_ST}	{insert(yylineno,++count,yytext,"")}
{CONTINUE_ST}	{insert(yylineno,++count,yytext,"")}
{BREAK_ST}	{insert(yylineno,++count,yytext,"")}
{TRUE_ST}	{insert(yylineno,++count,yytext,"")}
{FALSE_ST}	{insert(yylineno,++count,yytext,"")}
{NILL_ST}	{insert(yylineno,++count,yytext,"")}
{FUNC_ST}	{insert(yylineno,++count,yytext,"")}
{RETURN_ST}	{insert(yylineno,++count,yytext,"")}

{PLUS_OP}	{insert(yylineno,++count,yytext,"")}
{MINUS_OP}	{insert(yylineno,++count,yytext,"")}
{EQUAL_OP}	{insert(yylineno,++count,yytext,"")}
{MULTI_OP}	{insert(yylineno,++count,yytext,"")}
{DIVISION_OP}	{insert(yylineno,++count,yytext,"")}
{PERCENT_OP}	{insert(yylineno,++count,yytext,"")}
{INCREMENT_OP}	{insert(yylineno,++count,yytext,"")}
{DICREMENT_OP}	{insert(yylineno,++count,yytext,"")}

{COMP_EQUAL_OP}	{insert(yylineno,++count,yytext,"")}
{COMP_NOT_EQUAL_OP}	{insert(yylineno,++count,yytext,"")}
{COMP_BIGGER_OP}	{insert(yylineno,++count,yytext,"")}
{COMP_LESS_OP}	{insert(yylineno,++count,yytext,"")}
{COMP_BIGGER_EQUAL_OP}	{insert(yylineno,++count,yytext,"")}
{COMP_LESS_EQUAL_OP}	{insert(yylineno,++count,yytext,"")}

{LEFT_CBRACKET}	{insert(yylineno,++count,yytext,8)}
{RIGHT_CBRACKET}	{insert(yylineno,++count,yytext,8)}
{LEFT_PARENTHESIS}	{insert(yylineno,++count,yytext,8)}
{RIGHT_PARENTHESIS}	{insert(yylineno,++count,yytext,8)}
{SEMICOLON}	{insert(yylineno,++count,yytext,8)}
{COMMA}		{insert(yylineno,++count,yytext,8)}
{COLON}		{insert(yylineno,++count,yytext,8)}
{DOUBLE_COLON}	{insert(yylineno,++count,yytext,8)}
{FULL_STOP}		{insert(yylineno,++count,yytext,8)}
{RANGE}		{insertNode(yylineno,++count,yytext,8}

%%

typedef struct node{
    int line;
    int token_counter;
    char* text;
    char* type;
    char* value; 


    struct node* next;
    struct node* prev;
}alpha_token_t;
/*
types :
IDENT 1  
INT 2
REAL 3
STRING 4
OPERATOR 5
KEYWORD 6
COMMENT 7
PUNCTUATION 8
*/

alpha_token_t *listHead=NULL;
alpha_token_t *listTail=NULL;

void insertNode (int line, char* value , char* text, int type){
	alpha_token_t *new_token = malloc(sizeof(alpha_token_t));
	new_token->line=line;
	new_token->token_counter=count;
	if(type==1){
		new_token->text=strdup(text);
		new_token->type=strdup("IDENT");
		new_token->value=strdup(text);

	}
	else if(type==2){
		new_token->text=strdup(text);
		new_token->type=strdup("INT");
		new_token->value=atoi(text);
	}
	else if(type==3){
		new_token->text=strdup(text);
		new_token->type=strdup("REAL");
		new_token->value=atof(text);	
	}
	else if(type==4){
		new_token->text=strdup(text);
		new_token->type=strdup("STRING");
		new_token->value=strdup(value);	
	}
	else if(type==5){
		new_token->text=strdup(text);
		new_token->type=strdup("OPERATOR");
		new_token->value=strdup(value);
	}
	else if(type==6){
		new_token->text=strdup(text);
		new_token->type=strdup("KEYWORD");
		new_token->value=strdup(value);	
	}
	else if(type==7){
		new_token->text=strdup(text);
		new_token->type=strdup("COMMENT");
		new_token->value=strdup(value);
	}
	else if(type==8){
		new_token->text=strdup(text);
		new_token->type=strdup("PUNCTUATION");
		new_token->value=strdup(value);
	}

	if(listHead==NULL){
		listHead=new_token;
		listHead->next=new_token;
		listHead->prev=NULL;
		listTail=new_token;
		listTail->next=NULL;
		listTail->prev=new_token;
	}
	else{
		new_token->prev=listTail;
		new_token->next=NULL;
		listTail->next=new_token;
		listTail=new_token;
	}
}
void printList(){
	alpha_token_t* tmp = listHead;
	while(tmp!=NULL){
		printf("%d: #d    %s    %s      %s\n",tmp->line,tmp->token_counter,tmp->text,tmp->type,tmp->value);
		tmp=tmp->next;
	}
}

int main(int argc,char** argv)
{
  if(argc>1){
   if(!(yyin=fopen(argv[1],"r"))){  //yyin dikths sto file p tha kanume scan//
      fprintf(stderr,"Cannot read file:%s\n",argv[1]);
      return 1;
   }
  }else{
    yyin=stdin;
  }


    yylex();
    return 0;
}
