#include <stdio.h>
 int main() 
{
	int a,b[30],i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=a;i++)
	{
		if(i!=b[i])
		{
			printf("\n%d",i);
			break;
		}
	}
 
	return 0;
}
