#include<stdio.h>
int main()
{
int a,b=0,i,c[100],d;
scanf("\n%d",&a);
for(i=0;i<a;i++)
{
scanf("\n%d",&c[i]);
}
for(i=0;i<a;i++)
{
b=b+c[i];
}
d=(b/a);
printf("\n Median is %d",d);
return 0;
}
