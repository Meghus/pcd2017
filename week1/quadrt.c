#include<stdio.h>
#include<math.h>
typedef struct{
  float real,imag;
}complex;
typedef struct{
  complex r1,r2;
}roots;
roots findroots(float a,float b,float c){
roots qd;
float d=b*b-4*a*c;
if(d==0){
qd.r1.real=(-b/2*a);
qd.r2.real=(-b/2*a);
qd.r1.imag=0;
qd.r2.imag=0;
}
else if (d>0){
qd.r1.real=(-b+sqrt(d))/(2*a);
qd.r2.real=(-b-sqrt(d))/(2*a);
qd.r1.imag=0;
qd.r2.imag=0;
}
else if (d<0){
qd.r1.real=(-b/2*a);
qd.r1.imag=((sqrt(-d))/2*a);
qd.r2.real=(-b/2*a);
qd.r2.imag=((sqrt(-d))/2*a);
}
return qd;
}
int main(){
roots qd;
float a,b,c;
printf("enter the coefficients of x^2,x and constants:");
scanf("%f %f %f",&a,&b,&c);
qd=findroots(a,b,c);
printf("the roots are %f+i%f and %f-i%f",qd.r1.real,qd.r1.imag,qd.r2.real,qd.r2.imag);
return 0;
}
