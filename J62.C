#include <stdio.h>
#include<string.h>

int main() 
{
    int a,i,c=0;
    char b[25];
	printf("\n enter the string and the a value");
	scanf("%s ",&b);
	a=strlen(b);
	for(i=0;i<a;i++)
	{
		if(b[i]=='0'||b[i]=='1')
		c=1;
		else
		c=0;
	}
	if(c==1)
	printf("\nyes");
	else
	printf("\n no");
	return 0;
}
