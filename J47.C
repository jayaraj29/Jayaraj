#include <stdio.h>

int main(void) 
{
	int a[100],i,b,c,d;
	printf("\n Enter the size of the array.....");scanf("%d",&b);
	printf("\n the array elements are.......");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	c=a[0];
	d=a[0];
	for(i=1;i<b;i++)
	{
		if(a[i]>c)
		{
			c=a[i];
		}
		if(a[i]<d)
		{
			d=a[i];
		}
	}
	printf("\n%d",c);
	printf("\t%d",d);

	return 0;
}
