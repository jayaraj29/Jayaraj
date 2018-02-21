#include <stdio.h>
#include<string.h>
int main(void) 
{
    int i,j;
	char ch1[50],ch2[50];
	printf("\n Enter the string........");
	scanf("%s %s",&ch1,&ch2);
	for(i=0;ch1[i]!='\0';i++)
	{
		
	}
	for(j=0;ch2[j]!='\0';j++)
	{
		ch1[i]=ch2[j];
		i++;
	}
	ch1[i]='\0';
	printf("\n%s",ch1);
	
	return 0;
}
