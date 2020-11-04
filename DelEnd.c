#include<stdio.h>
#include<stdlib.h>

typedef struct Link
{
 int d;
 struct Link *next;
}Node;

Node *start,*ptr;

void addNode(Node **st, Node **pt);
void delNode(Node **st);
void display(Node *);

void main()
{
 start=NULL;
 int ans=1,v=0; 

while(ans==1)
{
  printf("Add a node: ");
  fflush(stdin);
  scanf("%d",&v);
  ptr=(Node *)malloc(sizeof(Node));
  ptr->d=v;
  ptr->next=NULL;
  
  addNode(&start,&ptr);

   printf("do you wn c: ");
   fflush(stdin);
   scanf("%d",&ans);
  
  }
 
  display(start);

  delNode(&start);
  
  display(start);
}

/* from end **************/

void addNode(Node **st, Node **pt)
{
  Node *tmp;
 if( (*st) == NULL )
  {
     *st=*pt;
   }
 else
  { for(tmp=*st;tmp->next!=NULL;tmp=tmp->next);

    tmp->next=*pt;//In newly created node the address / next pointer points to NULL
  }
}

void delNode(Node **st)
{
  Node *tmp;
 if( (*st)->next == NULL )
  {
     *st=NULL;
   }
 else
  { 
     for(tmp=*st;tmp->next->next!=NULL;tmp=tmp->next);
      free(tmp->next);
      tmp->next=NULL; 
     
     
  }
}

void display(Node *st)
{
 Node *tmp;
for(tmp=st;tmp;tmp=tmp->next)
  printf(" %d",tmp->d);
printf("\n");
}
