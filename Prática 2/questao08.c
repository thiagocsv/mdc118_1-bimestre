#include <stdio.h>
#include <math.h>

int main()
{
  int x1, y1, x2, y2;
  printf("x1:");
  scanf("%d", &x1);
  printf("y1:");
  scanf("%d", &y1);
  printf("x2:");
  scanf("%d", &x2);
  printf("y2:");
  scanf("%d", &y2);
  int distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
  printf("Distancia entre os pontos: %d", distance);
  return 0;
}
