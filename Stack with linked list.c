#include <stdio.h>
#include <stdlib.h>
struct node
   {
       int data;
       struct node *next;
   };
    struct node *t=0;
   void push()
   {
       int x;
       printf("take the nuber");
       scanf("%d",&x);
       struct node *newnode;
       newnode=(struct node*)malloc(sizeof(struct node));
      newnode->next=t;
       t=newnode;
       t->data=x;

   }
   void display()
   {
       struct node*temp;
       temp=t;
       if(temp==0)
       {
           printf("nothing to print");
       }
       else
       {
           while(temp!=0)
           {
               printf("%d\n",temp->data);
               temp=temp->next;
           }
       }
   }
   void pop()
   {
       struct node *temp;
       temp=t;
       if(t==0)
       {
           printf("nothing to be pop");
       }
       else

{
   t=t->next;
   free(temp);
}
}
int main()
{
  int ch;
    do
  {
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
      case 1:push();
      break;
      case 2:pop();
      break;
      case 3:display();
      break;
      default:printf("invalid choice");
  }
  }

      while(ch!=0);
    return 0;
}
