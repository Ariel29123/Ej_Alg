/*
Escribir un programa que tome dos números enteros a y b como argumentos e imprima un entero aleatorio entre a y b.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int lower = atoi(argv[1]);
    int upper = atoi(argv[2]);
    if (lower > upper)
    {
        int temp= upper;
        upper = lower;
        lower = temp;
    }
    int rng = ((rand() % (upper - lower + 1)) + lower);
    printf("%d\n", rng);
    return 0;
}
