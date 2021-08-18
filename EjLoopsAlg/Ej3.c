/*
Escribir un programa que simule tirar un dado "cargado".
 Imprimiendo el resultado de tirar el dado, teniendo en cuenta que la probabilidad de tirar un 1, 2, 3, 4 o 5 es de 1/8 y de tirar un 6 es de 3/8.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int rng= (rand()%80)+ 1;
    if (rng <= 10)
    {
        printf("1");
    }

    if (rng <= 20 && rng > 10)
    {
        printf("2");
    }

    if (rng <= 30 && rng > 20)
    {
        printf("3");
    }

    if (rng <= 40 && rng > 30)
    {
        printf("4");
    }

    if (rng <= 50 && rng > 40)
    {
        printf("5");
    }

    if (rng > 50 && rng <= 80)
    {
        printf("6");
    }
    clock_t starttimer = clock();
    while (clock() < starttimer + 1100){}
    return 0;
}
