#include<stdio.h>
int reverse(int num)
{
  int reversenum=0;
  while(num!=0)
  {
    reversenum=(reversenum*10)+(num%10);
    num=num/10;
  }
  return reversenum;
}
int main()
{
  int givennum;
  printf("Enter the number:");
  scanf("%d",&givennum);
  int reversenum=reverse(givennum);
  printf("reverse of the number is %d \n",reversenum);
  return 0;
}
