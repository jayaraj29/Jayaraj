#include <stdio.h>

int main(void) 
{
	int a,b,c=0;
	printf("\n Enter the number....");scanf("%d",&a);
	b=a;
	while(b!=1)
	{
		if(b%2!=0)
		{
			c=1;
			break;
		}
		b=b/2;
	}
	if(c==0)
    printf("\n Yes");
    else if (c==1)
	printf("No");
	return 0;
}
