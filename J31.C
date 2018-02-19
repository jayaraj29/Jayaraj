#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
   char ch1[100],ch2[100],ch3[100];
   printf("\n Enter the sentence (only 3 words)....");
   scanf("%s",&ch1);
   scanf("%s",&ch2);
   scanf("%s",&ch3);
   printf("\n %d",strlen(ch1)+strlen(ch2)+strlen(ch3));
   return 0;
}
