#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("\n Enter the two numbers....");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n Swap numbers are %d  %d",a,b);
    return 0;
}
