#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
int n = atoi(argv[1]);
int numeros[n];
int i = 0;
for (i = 0; i < n; i++) {
  numeros[i] = i + 1;
  printf("%d\n", numeros[i] );
}
  return 0;
}
