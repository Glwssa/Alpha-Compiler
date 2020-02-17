%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int x=666;
int token=0;

%}

%option header-file="./scanner"
%option noyywrap
%option yylineno
%option case-insensitive 


IF if

ADD "+"

NUMBER_INT [0-9]+

NUMBER_REAL [0-9]+"."[0-9]+

STRING \"

LEFT_CBRACKET \{

ID [a-zA-Z][a-zA-Z0-9]*

COMMENT  "//".*

COMMENT1 "/*"

SPACE  [\n\r \v\t]
%%

{IF}     {printf("%d:	#%d	\"%s\"	KEYWORD IF <-enumarated \n",yylineno,++token,yytext);}

{ADD}     {printf("%d:   #%d     \"%s\"  OPERATOR PLUS <-enumerated \n",yylineno,++token,yytext);}

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

{LEFT_CBRACKET} { 	printf("%d:	#%d	\"%s\" LEFT_BRACE <-enumarated\n",yylineno,++token,yytext); }

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

%%
int main(int argc,char** argv)
{
  if(argc>1){
   if(!(yyin=fopen(argv[1],"r"))){  //yyin dikths sto file p tha kanume scan//
      fprintf(stderr,"Cannot read file:%s\n",argv[1]);
      return 1;
   }
  }else
    yyin=stdin;



    yylex();
    return 0;
}
