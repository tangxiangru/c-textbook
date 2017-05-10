#include <stdio.h>
#include <string.h>
void main()
{
	char str[80],*pStart,*pEnd;
	int len;
	printf("input string\n");
	gets(str);
	len=strlen(str);
	pStart=str;
	pEnd=str+len-1;
	while(*pStart==*pEnd && pStart <= pENd)
	{
		pStart++;
		pEnd--;

	}
	if (pStart<pEnd)
		printf("no\n");
	else
		printf("yes\n");
}