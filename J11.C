#include<stdio.h>
int main ()
{
int a,b,c=1;
printf("\n enter the value and power of the value....");
scanf("%d%d",&a,&b);
while(1<=b)
{
c=c*a;
b--;
}
printf("\n answer is .....%d",c);
return 0;
}
