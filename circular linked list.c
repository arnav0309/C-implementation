#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp;
void creat()
{
    int i,n;
    head=0;
    printf("how many number you want\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=0;
    printf("give number\n");
    scanf("%d",&newnode->data);
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
        newnode->next=head;
    }
    }
}
void display()
{
    struct node *t;
    t=head;
    if(head==0)
    {
        printf("there is nothing");
    }
    else
    {
        while(t->next!=head)
        {
            printf("%d\t",t->data);
            t=t->next;
        }
        printf("%d\t",t->data);
    }
}
int main()
{
    creat();
    display();
    return 0;
}
