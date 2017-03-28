#include <stdio.h>
void main()
{
  int i,sum=0;
  for(i=2;i<101;i+=2)
    sum=i+sum;
  printf("%d\n", sum);
}
