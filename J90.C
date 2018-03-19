#include <stdio.h>
#include<string.h>
int main() 
{
    int a,i;
	char ch[50];
	printf("\nenter the alphanumeric string:\n");
	scanf("%s",ch);
	a=strlen(ch);
	for(i=0;i<a;i++)
	{
		if(ch[i]>='0' && ch[i]<='9')
		{
			printf("%c",ch[i]);
		}
	}
	return 0;
}
