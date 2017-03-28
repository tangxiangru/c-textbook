#include <stdio.h>
long count (int n,int k);
void main()
{
	int n,k;
	n=10;
	k=2;
	printf("result = %ld\n",count(n,k));
	
}
long count(int n,int k)
{
	int i,j,sum,item;
	sum =0;
	for(i=1;i<=n;i++)
	{
		item =1;
		for (j=1;j<=k;j++)
			item *= i;
		sum +=item;
	}
	return(sum);
}
