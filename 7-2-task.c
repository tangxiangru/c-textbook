升序排列：冒泡、选择

前一半放奇数，后一半放偶数

#include <stdio.h>
void main()
{
  int i,j,odd,even,n,t,a[10];
  odd=0;
  even=9;
  for(i=0;i<10;i++)
  {
    scanf("%d",&n);

    if (n%2!=0)
      a[odd++]=n;
    else
      a[even--]=n;
    }


    for (i=0;i<odd-1;i++)
    {
      n=1;
      for(j=i+1;j<odd;j++)
        if (a[j]<a[n])
          n=j;
      if (n!=i)
      {
        t=a[i];
        a[i]=a[n];
        a[n]=t;

      }
    }


    for (i=odd;i<9;i++)
    {
      n=i;
      for(j=i+1;j<10;j++)
        if(a[j]<a[n])
          n=j;
      if(n!=i)
      {
        t=a[i];
        a[i]=a[n];
        a[n]=t;
      }
    }

  for (i=0;i<10;i++)
    printf("%d",a[i] );
  printf("\n" );
}
