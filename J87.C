#include <stdio.h>

int main() 
{
int a,b,c,d;
printf("\n enter the first number:");
scanf("%d",&a);
printf("\n enter the second number:");
scanf("%d",&b);
do
{
    c=a%b;
if(c==0)
break;
a=b;
b=c;
}while(c!=0);
d=b;
printf("\n the gcd of the given number is: %d",d);
return 0;
}
