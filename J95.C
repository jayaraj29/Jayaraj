#include <stdio.h>

int main() 
{
	float a,b,c;
	int d,e;
	scanf("%f %d %f",&a,&e,&b);
	c=((a*e*b)/100);
	d=floor(c);
	printf("\n%d",d);
	return 0;
}
