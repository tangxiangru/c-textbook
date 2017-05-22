#include <stdio.h>
int main()
{
  char dstStr[20]='12345',srcStr[20]='67890';
  unsigned int i,j;
  printf("Before:%s    %s\n",dstStr,srcStr);
  for(i=0;dstStr[i]!='\0';i++)
    ;
  for(j=0;srcStr[j]!='\0';j++)
    dstStr[i+j]=srcStr[j];
  dstStr[i+j]='\0';
  printf("After:%s \n",dstStr);
}
