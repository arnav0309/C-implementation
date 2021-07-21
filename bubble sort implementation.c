#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100], i,j,temp,n;
    printf("enter number of element\n");
    scanf("%d",&n);
    printf("enter data\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n-1;i++)
    {
       int flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    printf("sorted array is below:\n");
    for(i=0;i<n;i++)
    printf("%d",A[i]);
    return 0;
}
