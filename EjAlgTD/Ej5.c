/*
Escribir un programa que tome dos números enteros a y b como argumentos e imprima un entero aleatorio entre a y b.
*/
#include <stdio.h>


int main (void) {
  int i = 0;
  int num = 1000;
   while (i < 1000) {
    printf("%d ", num);
  num++;
  i++;
   if ( i % 5 == 0){
    printf("%d ",num);
   }
  }
  return 0;
}
