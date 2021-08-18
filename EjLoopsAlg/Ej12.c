/*
Escribir un programa que acepte como argumento un número entero e imprima el número con los digitos al revés.
Por ejemplo para la entrada 12345 debe imprimir 54321.
*/
#include <stdio.h>
#include <stdlib.h>

  int int main(int argc, char const *argv[]) {

   int n = atoi(argv[1])

   printf("Numero ingresado: %d"/n, n);

   printf("%d\n", n % 10 );
   n /=  10;
   printf("%d\n", n % 10 );
   n /=  10;
   printf("%d\n", n % 10 );
   n /=  10;
   printf("%d\n", n % 10 );
   n /=  10;

   printf("\n");

   return 0;
}
