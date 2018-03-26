#include <stdio.h>

int main()
{
    int a,b,c,i;
    printf("\n Enter the num.......");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
        c=a%2;
        b=a/2;
        printf("\n %d",b);
        c=a;
        break;
    }
    
    return 0;
}
