/*
Escribir un programa que acepte un argumento entero n y use dos loops anidados para imprimir un patrón como el de un tablero de ajedrez usando asteriscos y espacios con n filas y columnas.
*/
#include <stdio.h>
#include <stdlin.h>

int int main(int argv, char *argv[]) {
  int = n atoi(argv[1]);

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; i++) {
      if (i + j % 2 == 0)
      printf("*");

      else
      printf("", );
    }
    printf("\n" );
  }
}
