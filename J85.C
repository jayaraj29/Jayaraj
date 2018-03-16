#include <stdio.h>
#include<string.h>
int main() 
{
    int i,a;
	char ch[20];
	printf("\nenter the character");
	scanf("%s",&ch);
	a=strlen(ch);
	for(i=0;i<a;i++)
	{
	    if(i%2==0)
	    printf("%c",ch[i]);
	}
	printf("   ");
	for(i=0;i<a;i++)
	{
	    if(i%2==1)
	    printf("%c",ch[i]);
	}
	return 0;
}
