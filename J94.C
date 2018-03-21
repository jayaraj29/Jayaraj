#include <stdio.h>
int main() 
{
	int a,b,c[100],i;
	printf("\n Enter the no of elements and no of element print.....");
	scanf("%d %d",&a,&b);
	printf("\n enter the elements......");
	for(i=0;i<a;i++)
	{
	    scanf("%d",&c[i]);
	}
	b--;
	for(i=0;i<a;i++)
	{
	    if(i==b)
	    printf("\n %d",c[i]);
	}
	return 0;
}
