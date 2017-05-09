#include <stdio.h>
void Strcat(char *dstStr,char *srcStr)
{
  while (*dstStr != '\0') {
    dstStr++;
  }
  while (*srcStr !- '\0') {
    *dstStr=*srcStr;
    dstStr++;
    srcStr++;
  }
  *dstStr = '\0';
}
void  main(/* arguments */) {
  char s[80],t[80];
  gets(s);
  gets(t);
  Strcat(s,t);
  puts(s);
}
