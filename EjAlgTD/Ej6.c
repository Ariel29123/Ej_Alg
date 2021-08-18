/*
Escribir un programa que imprima la suma de dos enteros aleatorios entre 1 y 6 como cuando tiras dos dados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int a = rand() % 6 + 1;
    clock_t starttimer = clock();
    while (clock() < starttimer + 1001){}
    int b = rand() % 6 + 1;
    int r = a + b;
    printf("%d\n", r);
    return 0;
}
