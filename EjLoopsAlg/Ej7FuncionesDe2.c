/*
Escribir un programa que imprima una tabla con los valores de las funciones: ln n, n, n ln n, n2, n3, 2n para los valores de n: 1, 2, 4, 8, 16, 32, 64.
Usar caracteres \t para alinear las columnas y las funciones pow() y log() de math.h.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double n = 1;
    while (n <= 64)
    {
        printf("%lf\t%.0lf\t%lf\t%.0lf\t%.0lf\t%.0lf\n", log(n), n, n*log(n), n*n, n*n*n, pow(2.0, n));
        n = n*2;
    }
    return 0;
}
