#include <stdio.h>
void main()
{
  int i,sum=0,a[20];
  for(i=0;i<20;i++)
    scanf("%d",&a[i] );
  for(i=0;i<20;i++)
  {
    if(a[i]<0)
      continue;
    sum+=a[i];
  }
  printf("%d\n",sum );
}
