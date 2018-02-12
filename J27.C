#include <stdio.h>
int main() 
{
    int a;
    printf(" \n Enter the number.....");
    scanf("%d",&a);
    if(a>=-1000&&a<=1000)
    printf("\n %d is numeric",a);
    else
    printf(" \n %d is not numeric",a);
    return 0;
}
