#include <stdio.h>
#define N 6
int main()
{
  int i,j,a[N][N];
  for(i=0;i<N;i++)
  {
    a[i][0]=1;
    a[i][i]=1;
    for(j=1;j<i;j++)
      a[i][j]=a[i-1][j-1];

  }
  for(i=0;i<N;i++)
  {
    for(j=0;j<N-i-1;j++)
      printf("  " );
    for(j=0;j<=i;j++)
      printf("%2d  ",a[i][j] );
    printf("\n");
  }
}
