#include <stdio.h>
void main()
{
  int i,max,min,a[10];
  printf("input 10 number" );
  for(i=0;i<10;i++)
    scanf("%d",&a[i] );
  max=0;
  min=0;
  for(i=1;i<10;i++)
  {
    if (a[i]>a[max])
      max=i;
    if (a[i]<a[min])
      min=i;

  }
  i=a[max];
  a[max]=a[min];
  a[min]=1;
  for(i=o;i<10;i++)
    printf("%d",a[i] );
  printf("\n" );
}
