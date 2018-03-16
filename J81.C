#include <stdio.h>

int main(void) 
{
	int a,b;
	printf("\nenter the two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
    printf("\n%d",a-b);
	else
	printf("\n%d",b-a);
	return 0;
}
