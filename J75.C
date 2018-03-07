#include <stdio.h>
#include<string.h>

int main()
{
    int a;
    char ch[20];
    printf("\n Enter the string");
    scanf("%s",&ch);
    a=(strlen(ch))/2;
    if(a%2==0)
    {
        ch[a]='*';
        printf("\n %s",ch);
    }
    else
    {
        ch[a]='*';a=a-1;
        ch[a]='*';
        printf("\n %s",ch);
    }
    return 0;
}



