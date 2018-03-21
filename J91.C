#include <stdio.h>

int main() 
{
	int l,b,h,a,v;
	scanf("%d %d %d",&l,&b,&h);
	v=l*b*h;
	a=2*((l*b)+(b*h)+(h*l));
	printf("\nVOLUME=%d",v);
	printf("\nTSA=%d",a);
	return 0;
}
