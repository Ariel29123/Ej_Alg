#include <stdio.h>

int triangulo(int a, int b, int c) {
  return a+b > c && b+c > a && a+c > b ? 1 : 0;
}

int main(void) {
  printf(triangulo(5, 5, 5) ? "Es un triangulo\n" : "No es un triangulo\n");
  return 0;
}
