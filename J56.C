 #include <stdio.h>
 #include<string.h>
 
int main()
{
    int i,a,b,c;
    char ch[25];
    printf("\n Enter the string......");
    scanf("%c",&ch);
    a=strlen(ch);
    for(i=0;i<a;i++)
    {
        if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A' && ch[i]<='Z'))
	     {
	     b=1;
	     }
		else
		{
		b=0;
		}
		if(ch[i]>='0' && ch[i]<='9')
		{
		c=1;
		}
		else
	    {
	    c=0;
	    }
    }
    if(b==1&&c==1)
    printf("\n Yes");
    else
    printf("\n No");
    return 0;
}
