#include <stdio.h>
int main() 
{
	int a,b[50],i,c=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
		c=c+b[i];
	}
	printf("\n%d",c);
	return 0;
}
