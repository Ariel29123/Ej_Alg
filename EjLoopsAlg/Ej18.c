/*
Escribir un programa que acepte dos argumentos enteros representando coordenadas en el plano cartesiano. El programa debe imprimir a que cuadrante pertenece el punto.
Los cuadrantes del plano cartesiano se representan con los números romanos I, II, III y IV.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int x= atoi(argv[1]);
  int y= atoi(argv[2]);
  if (x>0 && y>0) {
    printf("The vector is in the 1st quadrant\n");
  } else if (x<0 && y>0) {
    printf("The vector is in the 2nd quadrant\n");
  } else if (x<0 && y<0) {
    printf("The vector is in the 3rd quadrant\n");
  } else if (x>0 && y<0) {
    printf("Vector is in the 4th quadrant\n");
  }
  return 0;
}
