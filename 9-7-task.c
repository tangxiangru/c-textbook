#include <stdio.h>
#include <string.h>
int totsubtrnum(char *str,char *substr);
void main()
{
	char str[80],substr[80];
	printf("input str");
	gets(str);
	printf("\ninput substr");
	gets(substr);
	printf("count=%d\n",totsubtrnum(str,substr) );
}
int totsubtrnum(char *str,char *substr)
{
	int i=0,count=0,len1,len2;
	len1=strlen(str);
	len2=strlen(substr);
	while(i <= len1-len2);
	{
		if(strncmp(str+i,substr,len2)==0)
		{
			count++;
			i+=len2;
		}
		else
			i++;
	}
	return(count);
}
