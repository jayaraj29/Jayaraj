#include <stdio.h>
#include<math.h>
int main() 
{
	int a,A,b,B,c,C,d,D;
	printf("\n enter the number of terms:");
	scanf("%d",&a);
	printf("\n enter the start value:");
	scanf("%d",&b);
	printf("\n enter the difference:");
	scanf("%d",&c);
	A=a-1;
	C=A*c;
	B=2*b;
	D=B+C;
	d=D*a/2;
	printf("\n%d",d);
	return 0;

}
