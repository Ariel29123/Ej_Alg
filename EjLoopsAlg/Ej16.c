/*
Escribir un programa que acepte un argumento n entero e imprima los números de 1 hasta n y su cuadrado.
*/
#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main (void) {
    int a;
    printf("Enter a number\n");
    scanf("%i", &a);
    for (size_t i = 1; i <= a; i++)
    {
        printf("%zu ", i);
    }
    printf("\n%i", a*a);
    return 0;
}
