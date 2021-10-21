#include <stdio.h>
#include <time.h>

int main(void) {
  srand(time(NULL))
  numeros[100];
  int max =101
  int min = -1

  for (i = 0; i < 100; i++) {
    numeros[i] = rand() %101;
  }
    if (numeros[i])>max {
      max = numeros[i]
    }
    if (numeros[i])<min {
      min = numeros[i]
    }

    printf("max: %d, min: %d",max,min);


  return 0;
}
