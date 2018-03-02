#include <stdio.h>

int main() 
{
	int a,b=1,c=1,d,i;
	printf("\n Enter the number.....");
	scanf("%d",&a);
	printf("%d",b);
    for(i=0;i<=a-2;i++)
    {
        d=b+c;
        printf("\t%d",c);
        b=c;
        c=d;
    }
return 0;
}

