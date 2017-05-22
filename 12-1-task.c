#include <stdio.h>
#include <stdlib.h>
#define MAX 256
void main(int argc,char *argv[ ])
{
  FILE *fp;
  char string[MAX];
  int i;
  if(argc != 2)
  {
    printf("error" );
    exit(0);
  }
  if ((fp=fopen(argv[1],"r")) == NULL)
  {
    printf("cannot\n" );
    exit(0);
  }
  i=1;
  while (fgets(string,MAX,fp) != NULL) {
    printf("%d %s",i++,string );
  }
  fclose(fp);
}
