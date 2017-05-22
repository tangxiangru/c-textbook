#include <stdio.h>
#include <string.h>
#define N 80
void main()
{
  char str[N];
  int i;
  printf("input ");
  gets(str);
  printf("After reverse");
  for(i=strlen(str)-1;i>=0;i--)
    printf("%c",str[i]);
  printf("\n" );
}
