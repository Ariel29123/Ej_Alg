/*
Escribir un programa que use la función atan2() de math.h para calcular el ángulo que forma un vector de coordenadas (x, y) con el eje x.
Por ejemplo el vector (1, 1) forma un ángulo de 45º y el vector (0, -1) un ángulo de 270º. La función atan2(y, x) calcula la arcotangente de y dividido x.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;
    printf("Enter x and y\n");
    scanf("%i %i", &x, &y);
    printf("Angle is %f", atan2(x, y));
    return 0;
}
