// 一元二次方程
#include <stdio.h>
#include <math.h>
void main(/* arguments */) {
  float a,b,c,d,x1,x2;
  scanf("%f%f%f\n",a,b,c );
  d=sqrt(b*b-4*a*c);
  x1=(-b+d)/(2*a);
  x2=(-b-d)/(2*a);
  printf("%f %f\n",x1,x2 );
}
