#include <stdio.h>
void main()
{
  int i,j,sum=0,mul=1;a[5][5];
  for(i=0;i<5;i++)
    for(j=0;j<5;j++)
      scanf("%d",&a[i][j] );
  printf("\n" );
  for(i=0;i<5,i++)
  {
    sum += a[i][i];
    if(i != 2)
      sum += [i][4-i];
    if(i % 2 !=0)
      continue;
    mul *= a[i][i];
    if(i !=2)
      mul *= a[i][4-i];
  }
  printf("sum=%d  mul=%d \n",sum,mul );
}

循环右移
套路for循环
