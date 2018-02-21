#include <stdio.h>

int main() 
{
    int a,i;
	char ch[50];
	printf("\n Enter the string & No of time print .....");
	scanf("%s",ch);
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("\n%s",ch);
	}
	return 0;
}
