#include<stdio.h>
int main()
{
int a,i;
printf("\n enter the value......");
scanf("%d",&a);
for(i=1;a>10;i++)
{
a=a/10;
}
printf("\n Number of digit is  %d",i);
return 0;
}
