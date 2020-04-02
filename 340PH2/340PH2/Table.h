#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  MAX_TABLE 10

typedef enum {
 GLOBAL=0, LOCAL, FORMAL,
 USERFUNC, LIBFUNC
}SymbolType;

const char* GetType(SymbolType type){
  switch(type)
  {
  	case GLOBAL: return "GLOBAL";
	case LOCAL: return "LOCAL";
	case FORMAL: return "FORMAL";
	case USERFUNC: return "USERFUNC";
	case LIBFUNC: return "LIBFUNC";
  }

}

const char* IsActive(int i){
	if(i==1) return "Active";
	else 	 return  "Inactive";
}

typedef struct SymbolTableEntry {
int isActive;
char *name;
int scope;
int line;
SymbolType type;
struct SymbolTableEntry *next;
struct SymbolTableEntry *nextScope;
struct SymbolTableEntry *args;
} SymbolTableEntry;

typedef struct Scope{
	int scope;
	SymbolTableEntry *symbol;
	struct Scope *next;
}Scope;

typedef struct ScopeBack{
		struct Scope *ptr;
}ScopeBack;

Scope *HeadScope=NULL;

SymbolTableEntry *Hash[MAX_TABLE]={NULL};
SymbolTableEntry *c={NULL};

void ReverseScope(int scope)
{
  if(HeadScope==NULL){
  	printf("Error.HeadScope is NULL,cant make reverse scope list\n");
  }else{
  	
  	
  }
}




void  MakeNewScope(int scope,SymbolTableEntry *symbol){
 		Scope* newnode=(Scope *)malloc(sizeof(Scope));
 		if(newnode==NULL) {
 			printf("error in making of new entry of scope list\n");
 			return;
		 }
		 
 		newnode->scope=scope;
		newnode->symbol=symbol;     //malloc for struct scope
		newnode->next=NULL;			//

		if(scope==0){
		    	HeadScope=newnode; //HeadScope is pointer in first element of scope list
		}else{
			 Scope *d;
		    d=HeadScope;
		    while(d->next != NULL)
        		{
           			
					   d=d->next;
           			
        		}
        	d->next=newnode;	
		}
		   
}


void PrintScopes(){

	Scope *ptr=HeadScope;
	SymbolTableEntry *ptr2;

	while(ptr!=NULL){
	    ptr2=ptr->symbol;
	    printf("-----------	Scope %d ----------\n",ptr->scope);
		while(ptr2!=NULL){
				
				printf("\"%s\"	[%s] (line %d) (scope %d) (%s)",ptr2->name,GetType(ptr2->type),ptr2->line,ptr2->scope,IsActive(ptr2->isActive));
				printf("\n");
			ptr2=ptr2->nextScope;   //traversal of scope list
		}
		ptr=ptr->next;
	}
	
}


void EnterScopeList(int scope,SymbolTableEntry *symbol){
	Scope *ptr=HeadScope;
	SymbolTableEntry *ptr2;  //ptr2 traversal of list of elements of scope
	SymbolTableEntry *prev;   //prev holds the trevious value of ptr2
	while(ptr!=NULL){
	    if(ptr->scope==scope) {
	    	ptr2=ptr->symbol;
			while(ptr2!=NULL){
			 prev=ptr2;
			 ptr2=ptr2->nextScope;   //end of list of scope,prev has the value of last struct
		    }
	    	break;
		}
		ptr=ptr->next;
	}
	
	if(prev!=NULL) prev->nextScope=symbol;  //link last element in tail
	else   printf("prev is NULL\n");
	return;	
}

int  ScopeOfVariableExist(int scope){
			Scope *d;
			int flag=0;
			if(HeadScope==NULL){      //list of scopes does not exist//
				printf("HeadScope is NULL,list of scopes does not exist\n");
				return 0;
			}else{
				 d=HeadScope;
		    	 while(d!= NULL)
        		 {
        			if(d->scope==scope){
        				flag=1;   //scope we looking for exist!!
        				break;
					}
           			d=d->next;
        		 }
        		 
        		 if(flag==1){
        		     return 1; //scope struct exist
				 }else{
				 	return 0;  //scope struct does not exist
				 }   	    
			}	
}


int hash(const char * str) {
        int hash = 401;
        int c;
        while (*str != '\0') {
                hash = ((hash << 4) + (int)(*str)) % MAX_TABLE;
                str++;
        }
        printf("hasj numbe:r%d\n",hash % MAX_TABLE);
        return hash % MAX_TABLE;
}


void insert( SymbolType  type,char *name,int scope,int line)
{
	
	  		SymbolTableEntry* newnode=(SymbolTableEntry *)malloc(sizeof(SymbolTableEntry));
	  		if(newnode==NULL){
	  			printf("error in making of new entry of hash\n");
				return;	
			}
			
            newnode->type=type;
	  		newnode->isActive=1;
	  		newnode->next=NULL;
	  		newnode->args=NULL;
	  		newnode->line=line;
	  		newnode->name=strdup(name);
	  		newnode->scope=scope;
	  		newnode->nextScope=NULL;
	  
	        int i=hash(name);
	   		if(Hash[i] == NULL){		//if pointer in first element exist//
        		Hash[i] = newnode;
		
   	    	}else{
        		c=Hash[i];
        		while(c->next != NULL) //if pointer in first element of hash does not exist//
        		{
           			c=c->next;
        		}
        		c->next=newnode;		//chaining
    		}
    		
    		if(ScopeOfVariableExist(scope)==0){  //if returns 0,scope of variable does not exist//
    			MakeNewScope(scope,newnode);
			}else{
				EnterScopeList(scope,newnode);   //if returns 1,struct of scope exist
			}
    		
    		
}


void display()
{
    int i;
    for(i=0;i<MAX_TABLE;i++)
          {
           printf("\nentries at index %d\n",i);
               if(Hash[i] == NULL)
               {
               printf("No Hash Entry");
               }
               else
               {
                              for(c=Hash[i];c!=NULL;c=c->next)
                              {
                              	printf("[name:%s,scope:%d,line:%d]",c->name,c->scope,c->line);
							  }
                              
               }
          }
         printf("\n");
}

void InitHash(){

insert(4,"print",0,0);
    insert(4,"input",0,0);
    insert(4,"objectmemberkeys",0,0);
    insert(4,"objecttotalmembers",0,0);
    insert(4,"objectcopy",0,0);
    insert(4,"totalarguments",0,0);
    insert(4,"argument",0,0);
    insert(4,"typeof",0,0);
    insert(4,"strtonum",0,0);
    insert(4,"sqrt",0,0);
    insert(4,"cos",0,0);
    insert(4,"sin",0,0);
 return;

}

void LookUpLocal(char *name,int scope,int line){
	int i=hash(name);
	if(Hash[i]==NULL){
		printf("Symbol:%s in line:%d does not exist in Table\n",name,line);
		if(scope==0) insert(0,name,scope,line);
		else 		 insert(1,name,scope,line);
	}else{

        if(scope!=0){
			c=Hash[i];
			while(c!=NULL){
				if((strcmp(name,c->name)==0)&&(c->type==4)){
					printf("\033[0;31m");
					printf("Error.Symbol:%s in line:%d shadowing library function:%s \n",name,line,c->name); 
					printf("\033[0m");
					return;
				}
				c=c->next;
			}
	   }
		c=Hash[i];
		while(c!=NULL){
			if((strcmp(name,c->name)==0)&&(c->scope==scope)&&(c->isActive==1)) break;
			c=c->next;		
	    }
	    
	    if(c==NULL){
	    	printf("Symbol:%s in line:%d does not exist in Table\n",name,line);
		    if(scope==0) insert(0,name,scope,line);
		    else 		 insert(1,name,scope,line);
		}else{
			printf("\033[0;32m");
			printf("Symbol:%s in line:%d already exist in scope:%d\n",name,line,scope);
			printf("\033[0m");
		}
	}
	
		return;
}

void Hide(int scope)
{

  Scope *ptr=HeadScope;
  SymbolTableEntry* ptr2;
  
  if((HeadScope!=NULL)&&(scope!=0)){
	while((ptr!=NULL))
	{
		if(ptr->scope==scope){
 		  break;
		}
		ptr=ptr->next;
 	}

    if(ptr!=NULL)
    {
		ptr2=ptr->symbol;
		while(ptr2!=NULL){
		  ptr2->isActive=0;
		  ptr2=ptr2->nextScope;
		}
    }else{
    	printf("Error:cant find scope list for hiding\n");
	}
    
 }else{
  	printf("Error:cant use hide for scope zero\n");
 }

 return ;
}

void LookUpGlobal(char  *name,int line)
{
  Scope *ptr=HeadScope;
  SymbolTableEntry  *ptr2;
  if(ptr!=NULL){
     	ptr2=ptr->symbol;
        while(ptr2!=NULL){
            if(strcmp(ptr2->name,name)==0) break;
                  ptr2=ptr2->nextScope;
        }
  }else{
    printf("Error.There is no global scope\n");
    return ;
  } 

  if(ptr2!=NULL) {
    printf("\033[0;32m");
    printf("Symbol:%s in line:%d already exist in scope zero\n",name,line);
    printf("\033[0m");
  }else{
    printf("\033[0;31m");
    printf("Error.Symbol :: %s in line:%d does not exist in scope zero\n",name,line);
    printf("\033[0m");

  }
  
  return;
}


void LookUpFromToZero(int scope,char *name,int line)
{
	int scopeT=scope;
	Scope *ptr=HeadScope;
	int functionFlag=0;
	SymbolTableEntry* ptr2=NULL;
	int flag=0;
	while(scopeT>=0){
		ptr=HeadScope;
		while(ptr!=NULL){
			if(ptr->scope==scopeT) break;
			ptr=ptr->next;
		}
		
		if(ptr!=NULL){
			ptr2=ptr->symbol;
			while(ptr2!=NULL){
				if(strcmp(ptr2->name,name)==0&&(ptr2->isActive==1)) break;
				if(ptr2->type==3) functionFlag=1;
				ptr2=ptr2->nextScope;
			}
		}else{
			printf("In function:LookUpFromToZero cant find scope\n");
		}
		
		if(ptr2!=NULL) {
			flag=1;
			break;
		}
		else {
			
		}
		--scopeT;
	}
	
	if(flag==1) {
		if(ptr2->scope==0){
			printf("\033[0;32m");
    		printf("Reference to Symbol:%s in line:%d ,from line:%d,already exist in scope zero\n",ptr2->name,ptr2->line,line);
    		printf("\033[0m");	
    		return;
		}
				
		if(functionFlag==1) {
			printf("\033[0;31m");
			printf("Error:Function between %s in line:%d and %s in line:%d\n",name,line,ptr2->name,ptr2->line);
			printf("\033[0m");
			return;
		}
		
		if(functionFlag==0&&ptr2->scope!=0){
			printf("\033[0;32m");
    		printf("Reference to Symbol:%s in line:%d,from line:%d, already exist in scope:%d\n",ptr2->name,ptr2->line,line,ptr2->scope);
    		printf("\033[0m");	
    		return;
		}
	}else{
		printf("Symbol:%s in line:%d does not exist in Table\n",name,line);
		if(scope==0) insert(0,name,scope,line);
		else 		 insert(1,name,scope,line);
	}
	 
	 return;
}


void LookUpForFunction(int scope,char *name,int line){
	Scope *ptr=HeadScope;
	SymbolTableEntry* ptr2=NULL;
	
	if(HeadScope==NULL){
    	printf("HeadScope==NULL\n");
    	return;
	} 
	
	while(ptr!=NULL){
		if(ptr->scope==scope) break;
		ptr=ptr->next;
	}
	
	if(ptr!=NULL){
			ptr2=ptr->symbol;
			while(ptr2!=NULL){
				if(strcmp(ptr2->name,name)==0&&(ptr2->isActive==1)) break;
				ptr2=ptr2->nextScope;
			}
	}else{
			printf("In function:LookUpForFunction cant find scope\n");
	}
	
	
	if(ShadowsLibrary(name)==1) {
    	printf("\033[0;31m");
    	printf("Error(%d).Function.Shadowing.Function:%s.Line:%d.\n",name,line);
    	printf("\033[0m");
    	return;
	}
	
	if(ptr2!=NULL){
		    printf("\033[0;31m");
		    if(ptr2->type==0||ptr2->type==1||ptr2->type==2) 	printf("Error(%d).Function.Redeclaration.Variable:%s.Line:%d.\n",line,ptr2->name,ptr2->line);
		    if(ptr2->type==3) printf("Error(%d).Function.Redeclaration.Function:%s.Line:%d \n",line,ptr2->name,ptr2->line);
		    if(ptr2->type==4) 	printf("Error(%d).Function.Shadowing.Function:%s.Line:%d.\n",name,ptr2->line);
			printf("\033[0m");
	}else{
			printf("Function:%s in line:%d  not  in Table:%d,insert of Function Var\n",name,line,scope);
	  		insert(3,name,scope,line);
	}
	 
	 return;
}




void LookUpForFormal(char *name,int line,int scope){
	Scope *ptr=HeadScope;
	SymbolTableEntry* ptr2=NULL;

    if(HeadScope==NULL){
    	printf("HeadScope==NULL\n");
    	return;
	} 
	
	while(ptr!=NULL){
		if(ptr->scope==scope) break;
		ptr=ptr->next;
	}
	
	if(ptr!=NULL){
			ptr2=ptr->symbol;
			while(ptr2!=NULL){
				if(strcmp(ptr2->name,name)==0&&(ptr2->isActive==1)) break;
				ptr2=ptr2->nextScope;
			}
	}else{
			printf("In function:LookUpForFormal cant find scope struct in list of scopes for scope:%d\n",scope);
			return;
	}

    if(ShadowsLibrary(name)==1) {
    	printf("\033[0;31m");
    	printf("Error(%d).Formal variable trying to shadow  library function:%s.\n",line,name);
    	printf("\033[0m");
    	return;
	}

	if(ptr2!=NULL){
		    printf("\033[0;31m");
		    if(ptr2->type==0||ptr2->type==1||ptr2->type==2)	 printf("Error(%d).Formal redeclaration .Found same variable name:%s in line:%d.\n",line,ptr2->name,ptr2->line);
		    if(ptr2->type==3) 	printf("Error(%d).Formal redeclaration.Found same function name:%s in line:%d.\n",line,ptr2->name,ptr2->line);
		    if(ptr2->type==4 ) printf("Error(%d).Formal variable.Trying to shadow  library function:%s in line:%d.\n",line,ptr2->name);
			printf("\033[0m");
	}else{
	  		printf("Formal Var:%s in line:%d  not  in Table:%d,insert of Formal Var\n",name,line,scope);
	  		insert(2,name,scope,line);
	}
	 
	 return;
}


int ShadowsLibrary(char *name){
	
	SymbolTableEntry* ptr2=NULL;
	Scope *ptr=HeadScope;
	
	if(ptr!=NULL){
			ptr2=ptr->symbol;
			while(ptr2!=NULL){
				if(strcmp(ptr2->name,name)==0&&(ptr2->isActive==1)&&(ptr2->type==4)) break;
				ptr2=ptr2->nextScope;
			}
	}else{
			printf("In function:ShadowsLibrary error,HeadScope is NULL \n");
			return 0;
	}
	
	
	if(ptr2!=NULL){
		   return 1;
	}else{
	  	   return 0;
	}
	
}




















