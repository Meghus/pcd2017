#include<stdio.h>
int add (int a,int b,int c)
{
  return a+b+c;
}
int main()
{
int a=15;
int b=40;
int c=35;
int d=add(a,b,c);
printf("sum is %d\n",d);
return 0;
}

