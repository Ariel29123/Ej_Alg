/*
Reescribir el ejercicio 1 del primer apunte, pero esta vez usando un argumento de línea de comandos para determinar cuántas veces imprimir "Hola mundo".
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int quanta = atoi(argv[1]);
    int counter = 0;
    while (counter < quanta)
    {
        printf("Hola Mundo\n");
        counter++;
    }


    return 0;
}
