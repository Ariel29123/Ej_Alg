/*
Escribir un programa que calcule la cantidad de dinero que uno tendría al cabo de t años invirtiendo P pesos con una tasa de interés anual r.
La fórmula que hay que aplicar es Pert. Usar la función exp() de math.h para calcular ex.
*/
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  double P == atof(argv[1];
  double t == atof(argv[2];
  double r == atof(argv[3];
  printf("%.2f\n", P * exp (r * t));
  return 0;
}
