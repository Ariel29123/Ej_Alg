/*
Escribir un programa que acepte tres argumentos de tipo double: x0, v0 y t.
Imprimir el resultado de x0 + v0t + gt2/2. 
O sea la ecuación de desplazamiento para un tiro vertical después de t segundos, con posición inicial x0 y velocidad inicial v0.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("This program only takes numbers!\n");
    double xi = atof(argv[1]);
    double vi = atof(argv[2]);
    double t = atof(argv[3]);
    printf("%f", xi + vi*t + (9.807*(t*t)) / 2);
    return 0;
}
