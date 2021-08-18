/*
Escribir un programa que use un ciclo for para imprimir los primeros n números de Fibonacci. Usar un argumento de línea de comandos para el valor de n.
La sucesión de Fibonacci comienza así: 0, 1, 1, 2, 3, 5, 8, 13, 21 ... etc. El próximo número en la sucesión es la suma de los dos anteriores.
*/
#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char const *argv[]) {
   int n = atoi(argv[1]);
   int a = 0;
   int b = 1;
   printf("%d\n%d\n", a, b);
   for (int i = 2; i < n; i++) {
     int c = a + b;
     printf("%d\n", c);
     int = b;
     int = c;
   }
   return 0;
 }
