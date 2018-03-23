#include <stdio.h>
 
int main() 
{
	int a,b,c=1,i;
	printf("\n enter the num....");
	scanf("%d",&a);
	for(i=0;a!=0;i++)
	{
	    b=a%10;
	    c=c*b;
	    a=a/10;
	}
	printf("\n%d",c);
	return 0;
}
