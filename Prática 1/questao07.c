#include <stdio.h>
#include <math.h>

int main()
{
    int angulo = 45, distancia;
    printf("Distância percorrida: ");
    scanf("%d", &distancia);
    int altura = sin(angulo) * distancia;
    printf("Altura alcançada foi de %dm", altura);
}
