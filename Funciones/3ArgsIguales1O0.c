#include <stdio.h>

int iguales(int a, int b, int c) {
  return a == b && b == c ? 1 : 0;
}

int main(void) {
  printf(iguales(5, 5, 4) ? "Iguales\n" : "No iguales\n");
  return 0;
}
