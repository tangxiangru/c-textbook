#include <stdio.h>
void JsSort(char str[])
{
  int i,j,k,len;
  char ch;
  len=strlen(str);
  for(i=1;i<len-1;i+=2)
  {
    if(str[j]>str[k])
      k=j;
    if(k!=i)
    {
      ch=str[i];
      str[i]=str[k];
      str[k]=ch;
    }
  }
}
int main()
{
  char str[80];
  printf("input a str");
  gets(str);
  JsSort(str);
  printf("After sort:%s\n");
}
