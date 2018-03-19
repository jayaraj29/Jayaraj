#include <stdio.h>

int main() 
{
int a,b,c,d,g,e,f;
printf("\n enter the first number:");
scanf("%d",&a);
printf("\n enter the second number:");
scanf("%d",&b);
e=a;
f=b;
do
{
c=a%b;
if(c==0)
break;
a=b;
b=c;
}while(c!=0);
g=b;
d=(a*b)/g;
printf("\n the lcm of the given number is: %d",d);
return 0;
}
