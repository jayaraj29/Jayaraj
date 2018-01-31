#include<stdio.h>
int main ()
{
int a,b,c[50],d,i,f=0,e;
printf("\n enter the two values,,,,");
scanf("%d%d",&a,&b);
printf("\n enter the number of array..");
scanf("%d",&d);
printf(" \n enter the array...");
for(i=0;i<d;i++)
{
scanf("%d",&c[i]);
}
printf("\n choose the value");
scanf("%d",&e);
if(a==e)
e=a;
else
e=b;
for(i=0;i<e;i++)
{
    f=f+c[i];
}
printf("\n answer is....%d",f);
return 0;
}
