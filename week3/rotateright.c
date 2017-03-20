#include<stdio.h>
unsigned int rotateright(unsigned int n,unsigned int x)
{
  n=n%(sizeof(int)*8);
  unsigned int l=(sizeof(int)*8)-n;
  return x>>n|x<<l;
}
unsigned int main()
{
  unsigned int x,n,newno;
  printf("enter the number");
  scanf("%d",&x);
  printf("enter the number of rotations");
  scanf("%d",&n);
  newno=rotateright(n,x);
  printf("The number after %d rotating is %x",n,newno);
  return 0;
}
