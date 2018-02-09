#include<stdio.h>
int main()
{
int a[50],b,c,d;
printf("enter the range");
scanf("%d",&c);
printf("enter the array values");
for(b=0;b<c;b++)
{
scanf("%d",&a[b]);
}
d=a[0];
for(b=0;b<c;b++)
{
if(a[b]>d)
{
d=a[b];
}
}
printf("\n%d",d);
}
