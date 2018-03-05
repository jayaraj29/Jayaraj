##include<stdio.h>
int main()
{
	int a,b,c,n,i;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
		if(a>n)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	
	return 0;
}
