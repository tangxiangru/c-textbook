#include <stdio.h>
long fun(int m,int n);
void main()
{
	int m,n;
	long c;
	printf("please input");
	scanf("%d%d",&m,&n);
	c= fun(m,n);
	printf("c=%ld\n",c);
	
}
long fun(int m,int n)
{
	if(m == n || n ==0 )
		return (1L);
	else
		return (m * fun(m-1,n) / (m-n));
	
}
