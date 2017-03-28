#include <stdio.h>
#include <string.h>
int strloc (char str1[],char str2[] );
void main()
{
	int loc;
	char str1[]={"do"};
	char str2[]={"how do you do?"};
	loc=strloc(str1,str2);
	if(loc == -1)
		printf("the string is \"%s\" not in the string \"s\"\n",str1,str2);
	else
		printf("location of the string \"%s\" in the string \"%s\" is %d\n",str1,str2,loc);
}
int strloc(char str1[],char str2[])
{
	unsigned int i,len1,len2;
	len1=strlen(str1);
	len2=strlen(str2);
	if (len1>len2)
		return (-1);
	for(i=0;i<=strlen(str2)-strlen(str1);i++)
		if(strncmp(str1,str2+i,len1)==0)
			return (i);
	return(-1);
}
