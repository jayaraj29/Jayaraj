#include <stdio.h>
int main() 
{
	int a,b=0,i;
	printf("\n Enter the number...");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	    b=b+i;
	}
	printf("\n Total = %d",b);
	return 0;
}
