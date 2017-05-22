#include <stdio.h>
#include <string.h>
void func(char *s)
{
  char *pstr;
  for (pstr = 0;*pstr != '\0'; pstr++) {
    while(*pstr >='0' && *pstr <='9')
      strcpy(pstr,pstr+1);
  }
}
int main()
{
  char str[80];
  printf("input string");
  gets(str);
  func(str);
  printf("After:%s\n",str);
}
