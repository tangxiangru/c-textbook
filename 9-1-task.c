#include <stdio.h>
void swap (int *x,int *y);
void main()
{
  int n=3;
  int a[3],b[3];
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("answer");
  for ( i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }
  for ( i = 0; i < n; i++) {
    swap(&a[i],&b[i]);
  }
  printf("answer");
  for ( i = 0; i < n; i++) {
    printf("%d",a[i]);
  }
  for ( i = 0; i < n; i++) {
    printf("%d", b[i]);
  }
}
void swap (int *x,int *y)
{
  int term;
  term=*x;
  *x =*y;
  *y=term;
}
