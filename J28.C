#include<stdio.h>
int main()
{
	int a,i,b[50];
	printf("Enter the no of elemets....\n");
	scanf("%d",&a);
	printf("Enter the elements....\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	printf(" The Element with index  \n");
	for(i=0;i<a;i++)
	{
		printf("\n%d\t%d",b[i],i);
	}
}
