// Author: Gokul Raj, 235, R2A, CSE

//  Experiment 6 - Evaluate the arithmetic expression ((a-b/c*d+e)*(f+g)) and display its solution.
#include <stdio.h>

//  Program to evaluate (a-b/c*d+e)*(f+g)
void main(){
    double a, b, c, d, e, f, g;
    //  Input values for all variables
    printf("Input values for a b c d e f and g: ");
    scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &g);
    
    //  evaluate given expression
    double eval = ((a-b/c*d+e)*(f+g));

    printf("(%d-%d/%d*%d+%d)*(%d+%d) = %lf\n", (int)a, (int)b, (int)c, (int)d, (int)e, (int)f, (int)g, eval);
}