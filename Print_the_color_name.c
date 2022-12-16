#include <stdio.h>
int main()
{
     char ch;
     scanf("%c",&ch);
     if(ch=='R')
          printf("Red");
     else if(ch=='G')
          printf("Green");
     else if(ch=='B')
          printf("Blue");
     else if(ch=='V')
          printf("Violet");
     else if(ch=='I')
         printf("Indigo");
     else if(ch=='Y')
         printf("Yellow");
     else
     	printf("-1");
}