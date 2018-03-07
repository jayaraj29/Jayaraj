#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("\n Enter the number....");scanf("%d",&a);
    printf("\n Enter the ramge....");scanf("%d%d",&b,&c);
    d=(b<=a&&a<=c);
    e=(b>=a&&a>=c);
    if(d||e)
    printf("\n Yes");
    else
    printf("\n No");
    return 0;
}



