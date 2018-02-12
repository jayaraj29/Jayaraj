#include <stdio.h>
#include<time.h>
int main() 
{
	int a,b,c,d,Hr,Min;
	printf("\n Enter the time 1");
	scanf("%d %d",&a,&b);
	printf(" \n Enter the time 2");
	scanf("%d %d",&c,&d);
	Hr=abs(a-c);
	Min=abs(b-d);

	printf("%d Hours %d Mins",Hr,Min);
	return 0;
}
