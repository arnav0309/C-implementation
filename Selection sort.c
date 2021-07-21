#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a[100],i,j,min,n,temp;
    printf("how many number\n");
    scanf("%d",&n);
    printf("give the number\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            min=i;
            for(j=i+1;j<n-1;j++);
            {
               if(a[j]<a[min])
                    {
                        min=j;
                    }
            }
            if(min!=i)
            {
            temp=a[j];
            a[j]=a[i];
           a[i]=temp;
            }
        }

printf("sorted array is given below:\n");
    for(j=0;j<n;j++)
        printf("%d %C",a[j]," ");
        return 0;
}
