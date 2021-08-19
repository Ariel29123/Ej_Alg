/*
Escribir un programa que acepte un argumento entero que representa una cantidad de dinero.
El programa debe imprimir la combinación de billetes mínima necesaria para esa cantidad de dinero.
Por ejemplo si ingresamos 570 el programa imprime: "1000: 0, 500: 1, 200: 0, 100: 0, 50: 1, 20: 1, 10: 0".
 Usar múltiplos de 10 solamente como entrada al programa.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int money;
  printf("Enter the amount of money (number must be a multiple of 10)\n");
  scanf("%d", &money);
  while (money % 10 != 0)
  {
    printf("The number must be a multiple of 10\n");
    scanf("%d", &money);
  }

  int bill1000 = (int)(money/1000);
  money = money%1000;
  int bill500 = (int)(money/500);
  money = money%500;
  int bill200= (int)(money/200);
  money = money%200;
  int bill100= (int)(money/100);
  money = money%100;
  int bill50 = (int)(money/50);
  money = money%50;
  int bill20 = (int)(money/20);
  mone y= money%20;
  int bill10 = (int)(money/10);
  money = money%10;
  printf("1000: %d\t500: %d\t200: %d\t100: %d\t50: %d\t20: %d\t10: %d\n", bill1000, bill500, bill200, bill100, bill50, bill20, bill10);
  return 0;
}
