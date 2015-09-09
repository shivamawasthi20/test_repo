#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node node;

void create(node *,int);
void display(node *);
struct node *insert_begin(node *,int);
struct node *insert_middle(node *,int);


int main()
{
  
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    create(head,5);
    head=insert_middle(head,45);
    display(head);

    return 0;
}

void create(struct node * l,int n)
{
    int i;
     
      printf("enter value of 1 node ");
      scanf("%d",&l->data);
      
      for(i=0;i<n-1;i++)
      {
           l->next=(struct node *)malloc(sizeof(struct node));
           
           l=l->next;
           
           printf("enter value for %d node",i+2);
           scanf("%d",&l->data);
           l->next=NULL;
          
      }
} 
      
      struct node *insert_begin(struct node *l,int data)
      {
          
       struct node *temp;
      temp=(struct node *)malloc(sizeof(struct node));
      
      temp->data=data;
      
      temp->next=l;
      l=temp;
      
      return l;
      
          
      }
     
     struct node *insert_middle(struct node *c,int d)
     {
        struct node *temp,*l;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=d;
            l=c;
        int count=1,len=5;
        while(count<=len/2)
        {
            l=l->next;
            count++;
        }
        temp->next=l->next;
        l->next=temp;
        
        return c;
      
     }
     
     struct node *insert_pos(struct node *c,int n)
     {
         
          struct node *temp,*l,*prev;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=45;
            l=c;
        int count=1,len=6;
        while(count<k)
        {
            prev=l;
            l=l->next;
            count++;
        }
        
        prev->next=temp;
        temp->next=l;
        return c;
      
         
     }


void display(struct node * l)
{
    while(l!=NULL)
    {
        printf("%d->",l->data);
        l=l->next;
    }
    printf("NULL\n");
}



