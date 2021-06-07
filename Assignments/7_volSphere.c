//Experiment 7 - Determine the volume of a sphere for a given radius.
#include <stdio.h>

// Program to find volume of sphere from radius
void main(){
    float r;
    printf("Input radius: ");
    scanf("%f", &r);
    //  evaluate Volume = 4/3*π*r³
    double v = 3.1415*4*r*r*r/3;
    printf("Volume is %lf\n", v);
}