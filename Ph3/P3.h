#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "Table.h"

#define INITIAL_CAPACITY 2

int tmpcounter=0;
int scope=0;
extern int yylineno;


typedef enum{
  assign=0,add,sub,
  mult,divid,modul,
  uminus,and,or,
  not,if_eq,if_noteq,
  if_lesseq,if_greatereq,if_less,
  if_greater,call,param,
  ret,getretval,funcstart,
  funcend,tablecreate,
  tablegetelem,tablesetelem,jump
}iopcode;

typedef enum{
  var_e=0,
  tableitem_e,
  programfunc_e,
  libraryfunc_e,
  arithexpr_e,
  boolexpr_e,
  assignexpr_e,
  newtable_e,
  constnum_e,
  constbool_e,
  conststring_e,
  mil_e

}expr_t;

const char* GetTypeOp(iopcode op){
  switch(op)
  {
  case assign: return "assign";
	case add: return "add";
	case sub: return "sub";
	case mult: return "mul";
	case divid: return "div";
  case modul: return "modulo";
  case uminus: return "uminus";
  case and: return "and";
  case or: return "or";
  case not: return "not";
  case if_eq: return "if_eq";
  case if_noteq: return "if_noteq";
  case if_lesseq: return "if_lesseq";
  case if_greatereq: return "if_greatereq";
  case if_less: return "if_less";
  case if_greater: return "if_greater";
  case call: return "call";
  case param: return "param";
  case ret: return "return";
  case getretval: return "getretval";
  case funcstart: return "funcstart";
  case funcend: return "funcend";
  case tablecreate: return "tablecreate";
  case tablegetelem: return "tablegetelem";
  case tablesetelem: return "tablesetelem";
  case jump:return "jump";
  }
}


const char* GetTypeExpr(expr_t expr){
  switch(expr)
  {
    case var_e: return "var_e";
    case tableitem_e: return "tableitem_e";
    case programfunc_e: return "programfunc_e";
    case libraryfunc_e: return "libraryfunc_e";
    case arithexpr_e: return "arithexpr_e";
    case boolexpr_e: return "boolexpr_e";
    case assignexpr_e: return "assignexpr_e";
    case newtable_e: return "newtable_e";
    case constnum_e: return "constnum_e";
    case constbool_e: return "constbool_e";
    case conststring_e: return "conststring_e";
    case mil_e: return "mil_e";
  }
}



typedef struct expr{
    expr_t  type;
    SymbolTableEntry*   sym;
    struct expr* index;
    double numConst;
    char* strConst;
    unsigned char boolConst;
    struct expr* next;
}expr;

typedef struct quad{
  iopcode op;
  expr* result;
  expr* arg1;
  expr* arg2;
  unsigned label;
  unsigned line;

}quad;


quad* quads=(quad*)0;
unsigned total=0;
unsigned int currQuad=0;


#define EXPAND_SIZE 2
#define CURR_SIZE (total*sizeof(quad))
#define NEW_SIZE (EXPAND_SIZE*sizeof(quad)+CURR_SIZE)

void expand(){
  assert(total==currQuad);
  quad* p=(quad*)malloc(NEW_SIZE);
  if(quads){
    memcpy(p,quads,CURR_SIZE);
    free(quads);
  }
  quads=p;
  total +=EXPAND_SIZE;
}

void emit(iopcode op,expr* result,expr* arg1,expr* arg2)
{
  if(currQuad==total) expand();
  quad *p=quads+currQuad++;
  p->arg1=arg1;
  p->arg2=arg2;
  p->result=result;
  p->line=currline();
  //p->label=label;
  p->op=op;
}

void PrintQuads(){
  quad *p=NULL;
  int i=0;
  printf("----------------------------------------Quads-----------------------------------------------\n");
  for(i;i<currQuad;i++){
     printf("SLOGAN KIKLOS \n");
      p=quads+i;
      printf("quad:%d    ",i);
      printf("opcode:%s    ",GetTypeOp(p->op));
      if(p->result!=NULL)  printf("result:\"%s\"   ",p->result->sym->name);
      
      if(p->arg1!=NULL){
            if(p->arg1->type==10){
                printf("arg1:\"%s\"   ",p->arg1->strConst);
            }else  {
                printf("arg1:\"%s\"   ",p->arg1->sym->name);
            }
      }

       if(p->arg2!=NULL){
            if(p->arg2->type==10){
                printf("arg2:\"%s\"   ",p->arg2->strConst);
            }else  {
                printf("arg2:\"%s\"   ",p->arg2->sym->name);
            }
      }
     

      
      
     // if(p->arg2!=NULL)  printf("arg2:\"%s\"   ",p->arg2->sym->name);
     // if(p->label!=0)    printf("label:\"%d\"   ",p->label);
      printf("[%d]",p->line);
      printf("\n");
  }
}
 

char *newtmpname(){
 
     char strnum[20];
     char name[]="^";

     sprintf(strnum,"%d",tmpcounter);
  
     char* str1=(char *)malloc(sizeof(strnum)+sizeof(name)+1); 
    if (str1!= NULL) {
         strcpy(str1, name);
         strcat(str1, strnum);

    } else{
        printf ( "malloc() failed in newtmpname!\n");
    } 
  
    printf("%s\n",str1);
    tmpcounter++;
    return str1;
}

void resettmp(){
  tmpcounter=0;
}

int currscope()
{
  return scope;
}

int currline(){
  return yylineno;
}

SymbolTableEntry *newtmp(){
  char *name;
  SymbolTableEntry *sym;
  name=strdup(newtmpname());
  sym=LookUpScope(name,currscope());
  if(sym==NULL){
    return insert( 1,name,currscope(),0);
  }else{
    return sym;
  }

}

unsigned nextquadlabel(){
 return currQuad;
}

expr *function_def(SymbolTableEntry *sym){
   assert(sym);
   if(sym==NULL) {
     printf("sym in function_def is NULL\n ");
     return NULL;
   }
   expr* e=(expr*)malloc(sizeof(expr));
   memset(e,0,sizeof(expr));
   e->next=(expr*)0;
   e->sym=sym;
   e->type=programfunc_e;

   return e;
}

struct Stack { 
    int top; 
    unsigned capacity; 
    int* array; 
}; 
  
// function to create a stack of given capacity. It initializes size of 
// stack as 0 


struct Stack* createStack(unsigned capacity) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
    return stack; 
} 
  

// Stack is full when top is equal to the last index 
int isFull(struct Stack* stack) 
{ 
    return stack->top == stack->capacity - 1; 
} 
  
// Stack is empty when top is equal to -1 
int isEmpty(struct Stack* stack) 
{ 
    return stack->top == -1; 
} 
  
// Function to add an item to stack.  It increases top by 1 
void push(struct Stack* stack,unsigned item) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
    printf("%d pushed to stack\n", item); 
} 
  
// Function to remove an item from stack.  It decreases top by 1 
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top--]; 
} 
  
// Function to return the top from stack without removing it 
int peek(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top]; 
} 



void restorecurrscopeoffset(unsigned n){
  switch (currscopespace())
  {
  case programvar:programVaroffset=n; break;
  case functionlocal:functionLocaloffset=n; break;
  case formalarg :formalArgoffset=n; break;
  
  default:assert(0);
  }
}


expr *lvalue_expr(SymbolTableEntry *sym){
   assert(sym);
   if(sym==NULL) {
     printf("sym in function_def is NULL\n ");
     return NULL;
   }
   expr* e=(expr*)malloc(sizeof(expr));
   memset(e,0,sizeof(expr));
   e->next=(expr*)0;
   e->sym=sym;
   
   switch(sym->type){
     case 0:e->type=var_e; break;
     case 1:e->type=var_e; break;
     case 2:e->type=var_e; break;
     case 3:e->type=programfunc_e; break;
     case 4:e->type=libraryfunc_e; break;
   }
   

   return e;
}

expr *newexpr(expr_t t){
   
   expr *e=(expr*)malloc(sizeof(expr));
   if(e==NULL){
     printf("new_expr makes NULL pinter\n");
     return NULL;
   }
   memset(e,0,sizeof(expr));
   e->type=t;
   return e;
}

 expr *newexpr_constring(char* s){
   if(s==NULL){
     printf("newexpr_constring makes NULL pointer\n");
     return NULL;
   }

   expr *e=newexpr(conststring_e);
   if(e!=NULL){
     e->strConst=strdup(s);
     return e;
   }else{
     printf("newexpr_constring makes NULL pointer\n");
     return NULL;
   }

 }

 expr *emit_iftableitem(expr *e){
  if(e==NULL){
    printf("NULL in emit_iftableelem\n");
    return NULL;
  }

  if(e->type!=1){
    printf("SLOGAN MPAMPAS\n");
    return  e;
   }else{
    expr *result=newexpr(var_e);
    if(result==NULL){
          printf("NULL in emit_iftableelem\n");
          return NULL;
    }

    result->sym=newtmp();
    if(result->sym==NULL){
       printf("NULL in emit_iftableelem\n");
          return NULL;
    }

    emit(tablegetelem,result,e,e->index);
    return result;
  }


 }

 expr* member_item (expr* lv, char* name) { 

   if(lv!=NULL&&name!=NULL){
     lv = emit_iftableitem(lv); 
 
     expr* ti = newexpr(1); // Make a new expression 
     if(ti==NULL){
       printf("(1)NULL,member_item\n");
       return NULL;
     }
     
     ti->sym = lv->sym;
     ti->index = newexpr_constring(name);// Const string index return ti; 
    
     if(newexpr_constring(name)==NULL){
       printf("(2)NULL,member_item\n");
       return NULL;
     }

      return ti;
   }else{
     printf("(3)NULL,member_item\n");
     return NULL;
   }
    
}