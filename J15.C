#include<stdio.h>
int main()
{
int a,b,c;
printf("\n Enter the range....");
scanf("%d%d",&b,&c);
for (a=b;a<=c;a++)
{
if(a%2==0)
printf("\n%d",a);
}
return 0;
}
