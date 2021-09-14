// Author: Gokul Raj, 235, R2A, CSE

//Experiment 1 - Read 3 integer values and find the largest among them.

// Programme to find largest integer among 3 given integers
#include <stdio.h>

void main(){
    int a,b,c;
    //Input 3 integers
    printf("Input 3 integers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);
    
    //Pick 2 numbers (a,b), find greatest
    //Compare it with third (c) and print greatest
    if(a > b && a > c)
        printf("%d\n", a);
    else if(b > c)
        printf("%d\n", b);
    else
        printf("%d\n", c);
}