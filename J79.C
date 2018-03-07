#include<stdio.h>

int main()

{

int a,b,c,d,i;
printf("\n enter the numbers....");
scanf("%d%d",&a,&b);
   c=a*b;
   for(i=1;i<=c/2;i++)
   {
       if((i*i)==c)
       d=1;
   }
   if(d==1)
   printf("\n Yes");
   else
   printf("\n No");
    return 0;

}
