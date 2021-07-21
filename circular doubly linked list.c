#include <stdio.h>
#include <stdlib.h>

    struct node
    {
        int data;
        struct node *next,*prev;

    };
struct node *head;
    int creat()
    {
        int n,i;
       struct node *temp;
         head=NULL;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("how many number do you want");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {

            printf("give number");
            scanf("%d",&newnode->data);

            if(head==NULL)
            {
             head=temp=newnode;
             newnode->next=head;
             newnode->prev=head;
            }
            else
            {
              temp->next=newnode;
              newnode->prev=temp;
              newnode->next=head;
              head->prev=newnode;
              temp=newnode;
            }
        }
        return 0;

    }
    void display()
    {

    struct node *t;
    t=head;
           while(t->next!=head)
           {
               printf("%d\t",t->data);
               t=t->next;
           }
           printf("%d\t",t->data);

    }
int main()
{
creat();
display();
    return 0;
}
