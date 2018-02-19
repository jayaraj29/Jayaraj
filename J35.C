#include <stdio.h>

int main() 
{
	char str[50];
	int i,a=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			a=a+1;
		}
	}
	printf("\nthe number of numeric in the sentence is:%d",a);
	return 0;
}
