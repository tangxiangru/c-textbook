//反向输出四位十六进制数字
#include <stdio.h>
void main()
{
  int a,b;
  printf("shuru\n" );
  scanf("%4x\n",&a);
  b=(a&0x000F)<<12;
  b+=(a&0x00F0)<<4;
  b+=(a&0x0F00)>>4;
  b+=(a&0xF000)>>4;
  printf("%4x\n",b );

}
