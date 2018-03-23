#include <stdio.h>
#include<string.h>
int main() 
{
    int a,b,i;
	char c[20];
	scanf("%s",&c);
	scanf("%d",&a);
	b=strlen(c);
	for(i=a;i<b;i++)
	{
		printf("%c",c[i]);
	}
	return 0;
}
