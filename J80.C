#include <stdio.h>

int main()
{
    int a,b,c=0,d,i;
    printf("\n Enter the num......");
    scanf("%d",&a);
    for(i=0;a!=0;a=(a/10))
    {
        b=a%10;
        c=b+(c*10);
    }
    for(i=0;c!=0;c=(c/10))
    {
        d=c%10;
        if(c%2!=0)
        printf("%d \t",d);
    }
    return 0;
}
