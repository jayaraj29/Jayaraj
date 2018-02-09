#include<stdio.h>
int main()
{
int a[50],b,c,i,j;
scanf("%d",&c);
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<c;i++)
{
for(j=0;j<(c-2);j++)
{
if(a[j]>a[j+1])
{
b=a[j];
a[j]=a[j+1];
a[j+1]=b;
}
}
}
for(i=0;i<c;i++)
{
printf("%d",a[i]);
}
return 0;
}
