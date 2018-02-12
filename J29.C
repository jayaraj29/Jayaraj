#include <stdio.h>

int main()
{
int a,b,c;
printf("\n Enter the minute");
scanf("%d",&a);
if(a>60)
{
c=a%60;
b=a/60;
printf("%d Hour & %d Mins",b,c);
}
else 
printf("\n 0 %d",a);
	return 0;
}
