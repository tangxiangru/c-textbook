#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int getweek (char *str);
char *week_str[ ]={"sunday","mondat","tuesday","wednesday","thursday","friday","saturday"};
void main(int argc, char const *argv[])
{
	int k;
	k=getweek(argv[1]);
	if (k==-1)
	{
	exit(0);
	}	
	printf("%s\n",week_str[k] );
	return 0;
}
int getweek(char *str)
{
	int k,i=0;
	while(str[i] !=0)
	{
		if (str[i] < '0' || str[i]>'9')
			return(-1);
		else
			i++;

	}
	k=atoi(str);
	if(k<0 || K>6)
		return(-1);
	return(k);

}