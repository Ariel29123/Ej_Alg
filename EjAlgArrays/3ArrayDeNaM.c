#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int numeros[n];
  for (i = 0; i < n; i++) {
    numero[i] = rand()%(m+1);
    printf("%d\n", numeros[i] );
  }

  return 0;
}
