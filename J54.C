 #include <stdio.h>
 
int main()
{
    int a,b;
    printf("\n Enter the number......");
    scanf("%d",&a);
    if(a%2==0)
    b=a-2;
    else
    b=a-1;
    printf("\n %d",b);
    return 0;
}
