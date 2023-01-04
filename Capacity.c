#include<stdio.h>
int main()
{
    int s,t,b,c,kb;
    scanf("%d%d%d",&s,&t,&b);
    kb=2*s*t*b*512;
    c=kb/1024;
    printf("%d KB",c);
}