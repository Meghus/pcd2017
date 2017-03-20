#include<stdio.h>
#include<math.h>
float convert_radians(float d)
{
  float rad;
  rad=(3.1412/180)*d;
  return rad;
}
float compute_sin(float X)
{
  float term,sum,prev,diff;
  int i;
  term=sum=diff=X;
  for(i=3;diff>0.000001;i=i+2)
  {
    prev=term;
    term=(-term*X*X)/(i*(i-1));
    diff=fabs(prev-term);
    sum=sum+term;
  }
  return sum;
}
int main()
{
  float degree,X,sum;
  printf("Enter the degree");
  scanf("%f",&degree);
  X=convert_radians(degree);
  sum=compute_sin(X);
  printf("sin(%f)=%f",degree,sum);
  return 0;
}
