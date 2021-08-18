/*
Escribir un programa que acepte dos argumentos, cantidad de horas trabajadas y salario por hora.
El programa imprime el salario total del trabajador con un máximo de dos lugares después de la coma.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
  double hourlywage, hours;
  printf("Enter hourly wage\n");
  scanf("%lf", &hourlywage);
  printf("Enter worked hours\n");
  scanf("%lf", &hours);
  double salary= hourlywage*hours;
  printf("Your salary is %lf\n", salary);
  return 0;
}
