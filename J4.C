#include <stdio.h>
int main()
{
    char a,b,c;
    printf("Enter a character...... ");
    scanf("%c",&a);
    b=(a>='a' && a<='z');
    c=(a>='A' && a<='Z');
 
    if(b||c)
        printf("%c is an alphabet.",a);
    else
        printf("%c is not an alphabet.",a);
 
    return 0;
}
