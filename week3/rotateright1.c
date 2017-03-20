#include<stdio.h>
unsigned int rotateright(unsigned int n,unsigned int x)
{
  for(int i=0;i<n;i++)
  {
    if(x%2==0)
    {
      x=x>>1;
    }
    else
    {
      x=x>>1;
      x=x|(1<<(sizeof(int)*8)-1);
    }
  }
  return x;
}
unsigned int main()
{
  unsigned int x,n,newno;
  printf("enter the number");
  scanf("%d",&x);
  printf("enter the number of rotations");
  scanf("%d",&n);
  newno=rotateright(n,x);
  printf("The number after %d rotations is %x",n,newno);
  return 0;
}
