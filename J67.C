#include <stdio.h>

int main() 
{
	int a;
	printf("\n enter the number:");
	scanf("%d",&a);
	a+=1;
	while(a%10!=0)
	{
		a=a+1;
	}
	printf("\n%d",a);
	return 0;
}
