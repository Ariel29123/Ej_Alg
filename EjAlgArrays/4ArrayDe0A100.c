#include <stdio.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int numeros[100];
  int sum= 0;

  for (i = 0; i < 100; i++) {
    numeros[i] = rand() %101;
    sum= numeros[i] + sum;
    printf("%d\n", sum/100 );
  }

  return 0;
}
