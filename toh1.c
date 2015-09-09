#include <stdio.h>
#include<stdlib.h>

#define MAXSIZE 100
struct st
{
int top;
int ele[MAXSIZE];
};
typedef struct st stack;
void create(stack *s)
{
s->top=0;
}
void push(stack *s,int val)
{
if(isfull(s))
{
printf("Stack is full\n");
return;
}
s->top=s->top+1;
s->ele[s->top]=val;
}
int isfull(stack *s)
{
if(s->top>=MAXSIZE)
{
return 1;
}
else
{
return 0;
}
}
int pop(stack *s)
{
int val;
if(isempty(s))
{
printf("stack is empty\n");
return;
}
else
{
val=s->ele[s->top];
(s->top)--;
}
return val;
}
int isempty(stack *s)
{
if(s->top==0)
{
return 1;
}
else
return 0;
}
void printstack(stack *s)
{
int i;
for(i=s->top;i>0;i--)
{
printf("%d\n",s->ele[i]);
printf("------\n");
}
}

int peek(stack *s)
 {
     int n=s->ele[s->top];
     
     
     return n;
     
 }

// code


void towersofHanoi(stack *s1,stack *s2,stack *s3)
{
    int i=s1->top,num,pos,pos2;
    
    while(s3->top !=3)
     {
         if(i<=0)
             num=pop(s1);
        
            else
                num=pop();
             
        pos=push_stack(num,s1,s2,s3);
         
         if(pos==0)
         {
           pos2= arrange(s1,s2,s3);
             pos=push_stack(num,s1,s2,s3);
         }
         
         if(pos==1 && i!=1)
         {
             push(s1,num);
             
         }
         
         
         if(pos==2)
            push(s2,num);
            
         if(pos==3)
            push(s3,num);
            
            
         i--;
     }
    
    
    
}


int push_stack(int num,stack *s1,stack *s2,stack *s3)
 {
    
     
     int flag=0;
  
       
     
     if(peek(s1)>num||s1->top==0 && num!=30)
        flag=1;
    
    
     if(peek(s2)>num ||s2->top==0)
        flag=2;
    
   
      
     if(peek(s3)>num ||s3->top==0)
        flag=3;
    
    
  return flag;
     
 }


int arrange(stack *s1,stack *s2,stack *s3)
{
    
    int i=0,flag=0,num;
    
    stack *s[3];
    
    s[0]=s1;
    s[1]=s2;
    s[2]=s3;
    
    for(i=2;i>=0;i--)
    {
        if( peek(s[i]) < peek(s[i-1]))
            {
                num=pop(s[i]);
                push(s[i-1],num);
                flag=1;
            }
        
        if(flag==1)
            break;
        
    }
return flag;
}


int main()
{
stack *s[3];
int ch,val;
s[0]=(stack *)malloc(sizeof(stack));
s[1]=(stack *)malloc(sizeof(stack));
s[2]=(stack *)malloc(sizeof(stack));

create(s[0]);
create(s[1]);
create(s[2]);



push(s[0],30);
push(s[0],20);
push(s[0],10);

printstack(s[0]);



towersofHanoi(s[0],s[1],s[2]);

printf("s1 is \n");
printstack(s[0]);


printf("s2 is \n");

printstack(s[1]);

printf("s3 is \n");

//s3 is 
printstack(s[2]);





}



