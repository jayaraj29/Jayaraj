#include <stdio.h>
#include<string.h>

int main() 
{
    int a,b;
   char c[50],d[50];
   printf("\n Enter the two strings......");
   scanf("%s%s",&c,&d);
   a=strlen(c);
   b=strlen(d);
   if(a==b)
   printf("\n %s",c);
   else if(a<b)
   printf("\n %s",d);
   else
   printf("\n %s",c);
   return 0;
}
