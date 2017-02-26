#include<stdio.h>
typedef struct complex{
  int real;
  int imag;
}complex;
complex findsum(int n){
  int i,real[n],imag[n];complex num;
  for(i=0;i<n;i++){
   int j=i+1;
   printf("enter real and complex part of number respectively:",j);
   scanf("%d %d",&real[i],&imag[i]);
   num.real+=real[i];
   num.imag+=imag[i];
 }
return num;
}
int main(){
int n;complex num;
printf("how many complex numbers do you to add:");
scanf("%d",&n);
num=findsum(n);
printf("sum is %d+i%d",num.real,num.imag);
return 0;
}

