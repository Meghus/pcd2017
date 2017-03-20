#include<stdio.h>
float compute_area(float l,float b)
{
  float area;
  area=l*b;
  return area;
}
int main()
{
  float l,b,area;
  printf("Enter the length of rectangle");
  scanf("%f",&l);
  printf("Enter the breadth of the rectangle");
  scanf("%f",&b);
  area = compute_area(l,b);
  printf("The area of rectangle is %f",area);
  return 0;
}
