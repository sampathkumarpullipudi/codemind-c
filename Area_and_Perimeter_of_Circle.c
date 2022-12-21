#include <stdio.h>

#define PI 3.14f
int main() {
  float radius, perimeter, area;
  scanf("%f", & radius);
  perimeter = 2 * PI * radius;
  area = PI * radius * radius;
  printf("%.2f
", area);
   printf("%.2f
", perimeter);
}