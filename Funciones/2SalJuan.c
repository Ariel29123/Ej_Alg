#include <stdio.h>
#include <string.h>

void saludo(char nombre[]) {
  char saludo[100]= "Hi, ";
  strcat(saludo, nombre);
  printf(saludo);
  printf("\n");
  return;
}

int main(void) {
  saludo("Juan");
  return 0;
}
