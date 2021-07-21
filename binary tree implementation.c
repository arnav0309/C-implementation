#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creat()
{
    int x;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data for node(-1 for no node)\n");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("enter left child of %d\n",x);
    newnode->left=creat();
    printf("enter right child of %d\n",x);
    newnode->right=creat();
    return newnode;
};
void main()
{
  struct node *root;
    root=0;
    root=creat();
}
