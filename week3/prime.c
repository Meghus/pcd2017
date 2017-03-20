#include<stdio.h>
int prime(int n)
{
  int i;
  for(i=2;i<=(n/2);i++)
  {
    if((n%i)==0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  int num,status;
  printf("enter a number\n");
  scanf("%d",&num);
  status=prime(num);
  if (status==1)
  { 
    printf("It is a prime number\n");
  }
  else 
  {
    printf("It is not a prime number\n");
  }
  return 0;
}
