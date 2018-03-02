#include <stdio.h>

int main() 
{
    int a,i;
	char ch[25];
	printf("\n enter the string and the a value");
	scanf("%s %d",&ch,&a);
	for(i=0;i<a;i++)
	{
		printf("%c",ch[i]);
	}
	return 0;
}
