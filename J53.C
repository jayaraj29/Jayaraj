#include <stdio.h>
 
int main()
{
    int a,i,b,c=0;
    printf("\n Enter the number......");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
    printf("\n %d",c);
    return 0;
}


