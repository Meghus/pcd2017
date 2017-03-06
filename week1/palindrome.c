#include<stdio.h>
int palindrome(int num)
{
   int newnumber=0;
   while(num>0)
   {
       newnumber=(newnumber*10)+(num%10);
       num=num/10;
   }
   return newnumber;
}
int main()
{
   int givennumber;
   printf("enter the number:");
   scanf("%d",&givennumber);
   int newnumber=palindrome(givennumber);
   if(newnumber==givennumber)
   {
      printf("the number is a palindrome");
   }
   else  
   {
      printf("the number is not a palindrome");
   }
   return 0;
}
