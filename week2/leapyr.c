#include<stdio.h>
void leapyr(int year)
{
  if(((year%4==0)&&(year%100!=0))||(year%400==0))
  {
    printf("The year is a leap year");
  }
  else
  {
    printf("The year is not a leap year");
  }
}
int main()
{
  int year;
  printf("enter the year:");
  scanf("%d",&year);
  leapyr(year);
  return 0;
}
