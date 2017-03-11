#include<stdio.h>
float compute_poly(int n,float a[10],int X)
{
  float sum=0;int i;
  for(i=n;i>0;i--)
  {
    sum=(sum + a[i])*X;
  }
  sum=sum + a[0];
  return sum;
}
int main()
{
  int n,X,i;
  float a[10];
  float sum;
  printf("Enter the degree of polynomial\n");
  scanf("%d",&n);
  printf("Enter the value of X\n");
  scanf("%d",&X);
  if(n>0)
  {
    printf("Enter the value of coefficients\n");
    for(i=0;i<=n;i++)
    {
      scanf("%f",&a[i]);
    }
  }
  else
  {
    printf("invalid degree of polynomial");
  }
  sum=compute_poly(n,&a[i],X);
  printf("The sum = %f",sum);
  return 0;
}
