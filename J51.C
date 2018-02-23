#include <stdio.h>

int main(void) 
{
	int a,b,c=0;
	printf("\n Enter the number.....");scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
	}
	a=c;
	while(a!=0)
	{
		b=a%10;
		printf("%d\t",b);
		a=a/10;
	}
	return 0;

}
