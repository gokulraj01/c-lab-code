// Author: Gokul Raj, 235, R2A, CSE

//Experiment 17A - Find the factorial of a given natural number (looped).
#include <stdio.h>

void main(){
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n > 0){
        // multpily numbers from 1 to n together to get factorial
        for(int i=1; i<=n; i++)
            fact *= i;
    }
    // if 0 or less than 0, set factorial as 0
    else
        fact = 0;

    printf("Factorial of %d is: %d", n, fact);
}