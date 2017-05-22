#include <stdio.h>
#include <string.h>
#define N 30;
void Joseph(int p[],int n,ints,int m)
{
  int j,i,s1,w;
  s1=s;
  for(i=1;i<=N;i++)
  {
    s1=(s1+m-1);
    if(s1==0)
      s1=i;
    w=p[s1-1];
    for(j=s1;j<i;j++)
      p[j-1]=p[j];
    p[i-1]=w;
  }
}
int main()
{
  int i,p[N];
  Joseph(p,N,i,10);
  for(i=N-1;i>=0;i--)
  {
    printf("%4d",p[i]);
    if(i%10==0)
      printf("\n");
  }
}
