#include<stdio.h>
int main ()
{
    int a,b,c,h=0,i,d=0;
    printf(" \n Enter the values....");
    scanf("%d%d%d",&a,&b,&c);
    for(i=0;i<a;i++)
    {
        d=b+(i*c);
        h=h+d;
        
        
    }
    printf(" \n Value is....%d",h);
    return 0;
}
