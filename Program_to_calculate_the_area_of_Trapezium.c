#include <stdio.h>
 
int main()
{
    float a, b, h;
    float area;
    scanf("%f%f%f", &a, &b, &h);
    area = 0.5 * (a + b) * h ;
    printf("%.4f", area);
    return 0;
}