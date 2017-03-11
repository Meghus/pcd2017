#include<stdio.h>
float sqrt(int n)
{
  int i;
  float sqrt;
  if(n>0)
  {
    sqrt=n/2;
    for(i=0;i<n;i++)
    {
     sqrt=(sqrt+(n/sqrt))/2;
    }
    return sqrt;
  }
}
int main()
{
  int n;
  float rt;
  printf("Enter a number:\n");
  scanf("%d",&n);
  rt=sqrt(n);
  printf("The square root of the number is %f",rt);
  return 0;
}
