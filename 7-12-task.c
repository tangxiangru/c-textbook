#include <stdio.h>
int main()
{
  float score[6][6]={{120,130,110,280},{110,120,105,290},{108,128,120,278},{112,135,122,286},{100,120,108,276}};
  char name[6][10]={"张大明","李晓红","王志强","汪晓成","李丹","平均分"};
  int i,j;
  for(i=0;i<5;i++)
  {
    for(j=0;j<4;j++)
    {
      score[i][4]+=score[i][j];
      score[5][j]+=score[i][j];

    }
    score[i][5]=score[i][4];

  }
  for(j=0;j<4;j++)
    score[5][j]/=5;
  printf("姓名 语文 数学 英语 综合 总分 平均分\n");
  printf("--------------------\n");
  for(i=0;i<6;i++)
  {
    if (i<5)
      printf("%s %.0f %.0f %.0f %.0f %.0f %.2f\n",name[i],score[i][0],score[i][1],score[i][2],score[i][3],score[i][4]);
    else
    {
      printf("-------------------\n" );
      printf("%s %.2f %.2f %.2f %.2f\n", name[i],score[i][0],score[i][1],score[i][2],score[i][3]);
    }
  }

}
