#include <stdio.h>
int main ()
{
	int a;
	printf("\n Enter the year.....");
	scanf("%d",&a);
	if(a%4==0||a%100==0)
	printf("\n %d is a leap year",a);
	else
	printf("\n %d is not leap year",a);
	return 0;
}
