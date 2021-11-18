#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *formula(double a, double b, double c) {
  double d = (b*b)+(-4*a*c);
  if (d < 0) {
    double *NR= (double *)m(2*sizeof(double));
    NR[0]= (double)NAN;
    NR[1]= (double)NAN;
    return NR;
  }
  double *NR= m(2*sizeof(double));
  NR[0]= (-b + sqrt(d))/2*a;
  NR[1]= (-b - sqrt(d))/2*a;
  return NR;
}

int main(void) {
  double a, b, c;
  printf("Enter a b c\n");
  scanf("%lf %lf %lf", &a, &b, &c);
  double *NR= formula(a, b, c);
  for (size_t i = 0; i < 2; i++) {
    printf("%f\n", NR[i]);
  }
  free(NR);
  return 0;
}
