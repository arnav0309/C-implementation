#include <stdio.h>
#include <stdlib.h>

  int partition(int a[100],int lb,int ub)
{
    int pivot,start,end,temp;
    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}
void quicksort (int a[100],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
     loc=partition(a,lb,ub);
     quicksort(a,lb,loc-1);
     quicksort(a,loc+1,ub);
    }
}
int main()
{
   int i,n;
   printf("how many number");
   scanf("%d",&n);
   printf("enter %d elements\n",n);
   int a[n];
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort (a,0,n);
   printf("order of sorted element\n");
   for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}
