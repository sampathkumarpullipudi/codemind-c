#include <stdio.h>
int main()
{
    int num1, num2;
    float avg;
    scanf("%d",&num1);
    scanf("%d",&num2);

    avg= (float)(num1+num2)/2;
    printf("Average of %d and %d is: %.2f",num1,num2,avg);

    return 0;
}