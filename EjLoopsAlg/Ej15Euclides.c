/*
Usando el Algoritmo de Euclides para encontrar el MCD (máximo común divisor) escribir un programa que acepte como argumento dos números enteros e imprima su MCD.
*/
#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  printf("MCD:%d\n", a);
   return 0;
 }
