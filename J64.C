 #include <stdio.h>
 
int main()
{
    int a,b,c;
    printf("\n Enter the numbers......");
    scanf("%d%d",&a,&b);
    c=a+b;
    if(a%2==0)
    printf("\n %d is even",c);
    else
    printf("\n %d is odd",c);
    return 0;
}
