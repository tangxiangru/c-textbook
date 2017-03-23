//输入从某日零点开始，到现在为止已过多少秒，输出已过多少天并输出现在时间
#include <stdio.h>
void main(/* arguments */) {
  int time,day,now,hour,min,second;
  scanf("%d\n",&time );
  day=time/(24*60*60);
  now=time%(24*60*60);
  hour=now/3600;
  min=(now%3600)/60;
  second=(now%3600)%60;
  printf("已过%d天，现在%d：%d：%d\n", day,hour,min,second);

}
