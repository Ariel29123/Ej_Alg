/*
Escribir un programa que reciba como argumento un entero entre 0 y 99.
El programa debe generar un número aleatorio en ese rango e imprimir "Ganaste!" si el número ingresado coincide con el número generado o "Perdiste!" de lo contrario.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
  int num;
  printf("Enter a number between 0 and 99\n");
  scanf("%d", &num);
  while (!(num >= 0 && num <= 99))
  {
    printf("Invalid input\nNumber must be in the interval [0; 99]\n");
    scanf("%d", &num);
  }

  srand(time(NULL));
  int randnum= rand()%100;
  printf("%s\n", num== randnum ? "You won\n" : "You lose\n");
  return 0;
}
