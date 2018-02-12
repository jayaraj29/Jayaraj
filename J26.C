#include <stdio.h>
int main() 
{
    int a,b[10],c=0,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("\n%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
       for(j=i+1;j<a;j++)
       {
           if(b[i]>b[j])
           {
               c=b[i];
               b[i]=b[j];
               b[j]=c;
           }
       }
    }
   
     if(a%2==0)
     {
         printf("%d\n",(b[a/2]+b[(a/2)-1])/2);
     }
     else
     {
         printf("%d\n",b[(a-1)/2]);
     }
	return 0;
}
