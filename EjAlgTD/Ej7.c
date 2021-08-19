/*
Escribir un programa que imprima el valor de sen(2t) + sen(3t). Siendo t un argumento del programa, de tipo double.
*/
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double theta = atof(argv[1]);
    double thetarad = (theta * M_PI) / 180;
    double r = sin(2*thetarad) + sin(3*thetarad);
     double thetadeg= (r * 180) / M_PI;
    printf("%f rad", rthetadeg);
    return 0;
}
