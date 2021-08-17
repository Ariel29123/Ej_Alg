#include <stdio.h>


int main (void) {
  int i = 0;
  int num = 1000;
   while (i < 1000) {
    printf("%d ", num);
  num++;
  i++;
   if ( i % 5 == 0){
    printf("%d ",num);
   }
  }
  return 0;
}
