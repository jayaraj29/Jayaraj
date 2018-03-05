#include <stdio.h>
int main(void) 
{
    int a=1,i;
    char ch[50];
	printf("\n enter the sentence:");
    scanf("%[^\n]s",&ch);

	for(i=0;ch[i]!='\0';i++)

	{

		if(ch[i]==' ')

		{

			a=a+1;

		}

	}

	printf("\nno of words=%d",a);

	return 0;

}
