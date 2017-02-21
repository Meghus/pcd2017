#include<stdio.h>
int main()
{
  int n,i,value[100];
  int sum=0;
  printf("enter the number of integers to  
be added\n");
  scanf("%d",&n);
  printf("enter %d intergers\n",n);

  for(i=0,i<n;i++)
  {
  scanf("%d",&value[i];
  sum=sum+value[i];
  }
  printf("sum of entered 
integers=%d\n",sum);
  return 0;
}
