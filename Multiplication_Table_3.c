#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
        n=a*i;
        printf("%d x %d = %d
",a,i,n);
    }
}