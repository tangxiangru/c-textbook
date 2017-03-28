#include <stdio.h>
long F (int n);
void main()
{
	int i;
	for(i=1;i<=40;i++)
	{
	printf("F(%2d)=%-9ld",i,F(i));
	if (i%4 == 0)
		printf("\n");
	
	}
}
long F(int n)
{
	if(n<=2)
		return(1);
	return(F(n-1)+F(n-2));
}
