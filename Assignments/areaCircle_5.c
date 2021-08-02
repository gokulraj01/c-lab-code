//Experiment 5 - Read the radius of a circle, calculate the area and display it. 
#include <stdio.h>

// Calculate area of circle frouser given radius
void main(){
    float r;
    printf("Input radius: ");
    scanf("%f", &r);
    // calculate area form radius
    double area = 3.1415*r*r;
    printf("Area of circle is %lf\n", area);
}