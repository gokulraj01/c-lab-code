// Author: Gokul Raj, 235, R2A, CSE

//Experiment 17B - Find the factorial of a given natural number. (recursive)
#include <stdio.h>

// function to recursively find factorial
int factorial(int n){
    // return 0 if n is <= 0 to signify undefined.
    if(n <= 0)
        return 0;
    // stop recursing when n = 1
    else if(n == 1)
        return 1;
    // else recursively call function to n-1 and muliply with n
    return n*factorial(n-1);
}

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // printing factorial result from function
    printf("Factorial of %d is %d", n, factorial(n));
}