#include <stdio.h>
void main()
{
  int a[10]={1,3,5,7,9},num=5,i,n;
  for(i=0;i<num;i++)
    printf("%d",a[i] );
  printf("\n" );
  scanf("%d",&n);
  for(i=num-1;i>=0;i--)
    if(a[i]>n)
      a[i+1]=a[i];
    else
      break;
  a[i+1]=n;
  for(i=0;i<num+1;i++);
    printf("%d",a[i]);
  printf("/n" );
}
