#include "Table.h"
#define INITIAL_CAPACITY 2

int new_size=0;
int size=0;
int indexer=0;
int capacity=INITIAL_CAPACITY;

quad *q;


typedef enum{
  assign=0,add,sub,
  mul,div,mod,
  uminus,and,or,
  not,if_eq,if_noteq,
  if_lesseq,if_greatereq,if_less,
  if_greater,call,param,
  ret,getretval,funcstart,
  funcend,tablecreate,
  tablegetelem,tablesetelem
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

typedef struct expr{
    expr_t  type;
    SymbolTableEntry*   sym;
    expr* index;
    double numConst;
    char* strConst;
    unsigned char boolConst;
    expr* next;
}expr;

typedef struct quad{
  iopcode op;
  expr* result;
  expr* arg1;
  expr* arg2;
  unsigned label;
  unsigned line;

}quad;


void MakeQuadTable(){
     q=(quad*)malloc(INITIAL_CAPACITY*sizeof(quad));
     if(q==NULL){
         printf("Error(NULL pointer),in function:MakeQuadTable\n");
         return;
     }
}

void emit(iopcode op,expr *result,expr *arg1,expr *arg2,int line){
  //  printf("size:%d,capacity:%d\n",size,capacity);
    if(size==capacity){
        new_size=INITIAL_CAPACITY*sizeof(quad)+size*sizeof(quad);
        q=realloc(q,new_size);
        capacity=INITIAL_CAPACITY+size;
    }
    
    quad *Q=(quad*)malloc(sizeof(quad));
    Q->arg1=arg1;
    Q->arg2=arg2;
    Q->label=0;
    Q->line=line;
    Q->op=op;
    Q->result=result;

    q[indexer++]=Q;
    size++;
}

void printdata(){
    int i=0;
    int j=1;
    for(i;i<size;i++){
       // printf("quad:%d has data:%d",j++,q[i]-);
    }
    
}