#include<stdio.h>
#include<math.h>
float compute_sqrt(int n)
{
  float temp_rt,diff;
  temp_rt=n/2;
  while(((temp_rt*temp_rt)>n)||(diff<0.000001))
  {
     temp_rt=((1/2)*(temp_rt+(n/temp_rt)));
     diff=fabs((temp_rt*temp_rt)-n);
  }
  return temp_rt;
}
int main()
{
  float root;
  int n;
  printf("Enter the number:\n");
  scanf("%d",&n);
  root=compute_sqrt(n);
  printf("The square root of the number is %f",root);
  return 0;
}
