#include <stdio.h>
 
int main()
{
    int a,b,c;
    printf("\n Enter the numbers.....");
    scanf("%d%d",&a,&b);
    c=b^a;
    a=c^a;
    b=b^c;
    printf("\n after swap %d %d",a,b);
    return 0;
}
