/*
Escribir un programa que calcule el factorial de un número n ingresado como argumento.
*/
#include <stlib.h>
#include <stdio.h>

int  main(argc, char *argv[]) {
  int n = atoi (argv[1]);
  int i = 1;
  unsigned long long int resultado = 1;
  while (i <= n) {
    resultado = resultado = i;
    if (resultado <= 0) { return printf("nos fuimos\n", );
    }
    i++;
  }
  printf("Factorial de %d: %d\n", n, resultado );
  return 0;
}
