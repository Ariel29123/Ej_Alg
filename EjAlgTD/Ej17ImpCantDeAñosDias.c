/*
Escribir un programa que acepte como argumento un número entero de días. El programa debe imprimir la cantidad de años, semanas y días correspondiente.
Ignorar los años bisiestos. Por ejemplo para 375 días como entrada, el programa imprime: "1 año, 1 semana, 3 días.".
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int idays, years, months, weeks, days;
  printf("Enter number of days\n");
  scanf("%d", &idays);
  years= (int)(idays/365);
  idays= idays%365;
  months= (int)(idays/30);
  idays= idays%30;
  weeks= (int)(idays/7);
  idays= idays%7;
  days= idays;
  printf("years: %d\t months %d\t weeks %d\t days: %d\n", years, months, weeks, days);
  return 0;
}
