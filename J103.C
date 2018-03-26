#include <stdio.h>

int main() 

{
    int a,i;
	char ch[50];
	scanf("%[^\n]s",&ch);
	a=strlen(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(i==0)
			ch[i]=toupper(ch[i]);
		if(ch[i]==' ')
			ch[i+1]=toupper(ch[i+1]);
	}
	printf("\n%s",ch);
	return 0;
}
