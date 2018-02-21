#include <stdio.h>

int main() 
{
	int a[25],b,i,c;
	printf("\n Enter the number of elements.......");
	scanf("%d",&b);
	printf("\n Enter the elements.........");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	c=a[0];
	for(i=0;i<b;i++)
	{
		if(a[i]>c)
		{
			c=a[i];
		}
	}
	printf("\nThe maximum of the numbers is:%d",c);
	return 0;
}
