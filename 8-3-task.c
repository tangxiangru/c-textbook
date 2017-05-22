#include <stdio.h>
void GetData(int a[],int n)
{
  int i;
  printf("input number" );
  for (i = 0; i < n; i++) {
    scanf("%d",&a[i] );

  }
}
void Sort(int a[],int n)
{
  int i,j,k,t;
  for(i=0;i<n-1;i++)
  {
    k=i;
    for(j=i+1;j<n;j++)
      if(a[j]>a[k])
        k=j;
    if(k!=i)
    {
      t=a[i];
      a[i]=a[k];
      a[k]=t;
    }
  }
}
int main()
{
  int i,a[N];
  GetData(a,N);
  Sort(a,N);
  printf("After sort" );
  for(i=0;i<N;i++)
    printf("%d",a[i] );
  printf("\n");

}
