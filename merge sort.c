#include <stdio.h>
#include <stdlib.h>
int b[100];
int merge(int a[],int mid,int l,int u)
{
  int x,j,k;

  x=l;
  j=mid+1;
  k=l;
  while(x<=mid&&j<=u)
  {
      if(a[x]<=a[j])
      {
          b[k]=a[x];
          x++;
      }
      else
      {
          b[k]=a[j];
          j++;
      }
      k++;
  }
  if(x>mid)
  {
      while(j<=u)
      {
          b[k]=a[j];
          j++;
          k++;
      }
  }
      else
      {
          while(j>u)
          {
              b[k]=a[x];
              x++;
              k++;
          }
      }
  for(k=l;k<=u;k++)
  {

    a[k]=b[k];
  }
    return 0;
}
 int mergesort(int a[],int l,int u)
{
    int mid;
    if(l<u)
    {
        mid=(l+u)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,u);
        merge (a,mid,l,u);
    }
    return 0;
}
int main()
{
    int i,n;
    printf("how many number: \n");

    scanf("%d",&n);
    int a[n];
    printf("give the numbers: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       mergesort(a,0,n-1);
       printf("sorted array is\n");
       for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
       }
    return 0;
}
