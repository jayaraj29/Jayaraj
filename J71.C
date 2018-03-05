#include <stdio.h>
#include<string.h>
int main() 
{
	int i,j,n,k;
	char ch1[50],ch2[10];
	printf("\n enter the string:");
	scanf("%s",ch1);
	n=strlen(ch1);
	while(i<j)
	{
		for(i=0;i<n;i++)
		{
			for(j=n;j>=1;j--)
			{
				ch2[k]=ch1[i];
				ch1[i]=ch1[j];
				ch1[j]=ch1[i];
			}
		}
	}
	printf("\nyes");
	return 0;
}
