#include <stdio.h>

int main()
{
  float celsius, fahrenheit;
  printf("Temperatura em Celsius: ");
  scanf("%f", &celsius);
  fahrenheit = 9/5 * celsius + 32;
  printf("Temperatura em Fahrenheit: %.1f", fahrenheit);
  return 0;
}
