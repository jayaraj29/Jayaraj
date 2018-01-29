#include <stdio.h>
int main()
{
    char e;
    int a,b;

    printf("Enter an alphabet: ");
    scanf("%c",&c);
    a = (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u');
    b = (e == 'A' || e == 'E' || e == 'I' || e == 'O' || e == 'U');
    if (a || b)
        printf("%c is a vowel.", e);
    else
        printf("%c is a consonant.", e);
    return 0;
}
