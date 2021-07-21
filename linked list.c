#include <stdio.h>
#include <stdlib.h>
struct node
    {
        int data;
        struct node *next;

    };
    struct node *head,*newnode,*temp;
int main()
{
    int insert()
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter data=");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
        return 0;
    }

    head=0;int choice;int ans;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data=");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;

            temp=newnode;
        }
        printf("something(0,1)?");
        scanf("%d",&choice);
    }
    int display()
    {
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
    }
    printf("do you want to add0/1");
    scanf("%d",&ans);
    if(ans==1)
    {
        return insert();
        return display();
    }
    return 0;
}
