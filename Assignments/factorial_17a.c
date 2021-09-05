// Author: Gokul Raj, 235, R2A, CSE

//Experiment 17A - Find the factorial of a given natural number (looped).
#include <stdio.h>

void main(){
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    // multpily numbers from 1 to n together to get factorial
    for(int i=1; i<=n; i++)
        fact *= i;
    
    printf("Factorial of %d is: %d", n, fact);
}