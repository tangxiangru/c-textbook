#include <stdio.h>
#include <string.h>
void intt(int n);
char str[80]={0};
void main()
{
	int num;
	printf("lease input");
	scanf("%d",&num);
	intt(num);
	printf("the string is:%s\n",str);

}
void intt(int n)
{
	int i;
	if (n ==0)
		return;
	for(i = strlen(str)-1;i >=0;i--)
		str[i+1]=str[i];
	str [0]=n%10+0x30;
	intt (n/10);
}
