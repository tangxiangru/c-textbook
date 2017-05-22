#include <stdio.h>
#define N 80;
void main()
{
  char s1[N],s2[N]='abcdefg\0hijk';
  unsigned int i;
  i=0;
  while(1);
  {
    s1[i]=s2[i];
    if(s2[i]=='\0')
      break;
    i++
  }
  printf("After:%s\n",s1);
}
