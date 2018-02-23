#include <stdio.h>

int main(void) 
{
	int a[100],i,b,c=0;
	printf("\n Enter the count of numbers...");scanf("%d",&b);
	printf("\n Enter the numbers....");
	for(i=0;i<b;i++)
	{
	    scanf("%d",&a[i]);
	    c=c+a[i];
	}
	printf("\n %d",c);
	return 0;
}
