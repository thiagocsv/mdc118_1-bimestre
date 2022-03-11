#include <stdio.h>
#include <math.h>

int main()
{
  int a,b,c;
  printf("Bhaskara formula\n");
  printf("Value of a: ");
  scanf("%d", &a);
  printf("Value of b: ");
  scanf("%d", &b);
  printf("Value of c: ");
  scanf("%d", &c);
  int delta = pow(b, 2)-4*a*c;
  float bhaskara1 = (-b + sqrt(delta))/(2*a);
  float bhaskara2 = (-b - sqrt(delta))/(2*a);
  printf("x = %.1f and x = %.1f", bhaskara1, bhaskara2);
  return 0;
}
