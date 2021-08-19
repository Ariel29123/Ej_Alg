/*Escribir un programa que use cos() y sin() definidos en math.h para imprimir el valor de cos2θ + sen2θ para cualquier θ ingresado como argumento.
*/
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float theta = atof(argv[1]);
    float thetarad = (theta * M_PI) / 180; 
    float r = cos(thetarad) * cos(thetarad) + sin(thetarad) * sin(thetarad);
    printf("%f rad", r);
    return 0;
}
