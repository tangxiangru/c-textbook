//删除所有的c

#include <stdio.h>
#include <string.h>
#define N 80;
int main()
{
  char str[N],strtemp[N];
  unsighted int i,j;
  printf("input str");
  gets(str);
  for (i=0,j=0; i < strlen(str); i++) {
    if(str[i]!='c')
      strtemp[j++]=str[i];
  }
  strtemp='\0';
  strcpy (str,strtemp);
  printf("After:");
  printf("%s\n",str );



}
