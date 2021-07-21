#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,j,n,temp;
    printf("how many number\n");
    scanf("%d",&n);
    printf("give the number\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp)
        {
           a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("sorted array is given below:\n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}
