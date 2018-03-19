#include <stdio.h>

int main() 
{
	char ch1[50],ch2[50];
	int i,k,j;
	printf("\nenter the string:");
	scanf("%[^\n]s",ch1);
	for(i=0;ch1[i]!='\0';i++)
	{
		for(j=i+1;ch1[j]!='\0';j++)
		{
			if(ch1[i]>ch1[j])
			{
				ch2[k]=ch1[i];
				ch1[i]=ch1[j];
				ch1[j]=ch2[k];
		}	}
	}
	printf("\n%s",ch1);
	return 0;
}
