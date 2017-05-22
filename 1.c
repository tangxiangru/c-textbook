#include <stdio.h>
struct score_tab
{
  int rank;
  char no[10];
  char nam[21];
  int score;
  int time;
};
void main()
{
  struct score_tab score[100],temp;
  FILE *fp;
  int i,j,k,n,s,t;
  if ((fp = fopen（"score_tab.txt","r")) == NULL)
  {
    printf("can not" );
    exit(0);
  }
  n=0;
  while (/* condition */) {
    /* code */
  }
}
