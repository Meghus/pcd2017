#include<stdio.h>
int rotateright(int n,int x)
{
  n=n%(sizeof(int)*8);
  int l=(sizeof(int)*8)-n;
  return x>>n|x<<l;
}
int main()
{
  int x,n,newno;
  printf("enter the number");
  scanf("%d",&x);
  printf("enter the number of rotations");
  scanf("%d",&n);
  newno=rotateright(n,x);
  printf("The number after %d rotating is %x",n,newno);
  return 0;
}
