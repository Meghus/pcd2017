#include<stdio.h>
void sort(int n,int a[])
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
     for(j=0;j<(n-1-i);j++)
     {
       if(a[j]>a[j+1])
       { 
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
       }
     }
  }
}
int main()
{
  int n;
  printf("enter the number of elements:\n");
  scanf("%d",&n);
  printf("enter %d array elements:\n",n);
  int a[25];int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  sort(n,a);
  printf("array elements after sorting:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}
