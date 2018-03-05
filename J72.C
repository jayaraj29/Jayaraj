#include <stdio.h>
#include<string.h>
int main()
{
    char e[25];
    int a,b,i,c;

    printf("Enter an alphabet: ");
    scanf("%s",&e);
    c=strlen(e);
    for(i=0;i<c;i++)
    {
    a = (e[i] == 'a' || e[i] == 'e' || e[i] == 'i' || e[i] == 'o' || e[i] == 'u');
    b = (e[i] == 'A' || e[i] == 'E' || e[i] == 'I' || e[i] == 'O' || e[i] == 'U');
    }
    if (a || b)
        printf("%s is a vowel.", e);
    else
        printf("%s is a not vowel.", e);
    return 0;
}
