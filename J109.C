#include <stdio.h>
int main() 
{
	int b[25],a,i,c;
	printf("\n Enter the number of elements.......");
	scanf("%d",&a);
	printf("\n Enter the elements.........");
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	c=b[0];
	for(i=0;i<a;i++)
	{
		if(b[i]<c)
		{
			c=b[i];
		}
	}
	printf("\nThe maximum of the numbers is:%d",c);
	return 0;
}
