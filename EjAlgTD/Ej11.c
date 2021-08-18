/*
Escribir un programa que acepte tres argumentos x, y y z enteros e imprima "verdadero" si los números están en orden ascendente o descendente.
Es decir si x > y > z o x < y < z. Si no lo están, imprimir "falso".
*/
#include <stlib.h>
#include <stdio.h>

int  main(int argc, char const *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);

  if (x < y && y < z)
   printf("Verdadero\n");
  else if (x > y && y > z)
   printf("Verdadero\n");
  else
   printf("Falso\n");
  return 0;
  }
}
