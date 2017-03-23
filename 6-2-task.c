#include <stdio.h>
void main(/* arguments */) {
  int i,num=0,sum=0;
  for(i=1;i<100;i+=2)
  {
    num=i*(i+1)*(i+2);
    sum+=num;
  }
  printf("%d\n",sum);
}
