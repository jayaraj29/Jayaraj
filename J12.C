#include <stdio.h>
int main()
{
    int a,b = 0, c, d;

    printf("Enter an integer: ");
    scanf("%d", &a);

    d = a;
    while( a!=0 )
    {
        c = a%10;
        b = b*10 + c;
        a /= 10;
    }
    if (b == d)
        printf("%d is a palindrome.", d);
    else
        printf("%d is not a palindrome.",d);
    
    return 0;
}
