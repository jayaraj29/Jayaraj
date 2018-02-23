#include<stdio.h>
int main ()
{
    int a,i;
    printf("\n Enter the num....");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        a=a/10;
    }
    ++i;
    printf("\n %d",i);
    return 0;
}
