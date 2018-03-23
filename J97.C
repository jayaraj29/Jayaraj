#include <stdio.h>
int main(void) 
 
{
    int a,b,c=0;
    printf("\n enter the number:");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("\n%d",c);
    return 0;
    
}
