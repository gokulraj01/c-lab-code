// Author: Gokul Raj, 235, R2A, CSE

// Experiment 2 - Read a natural number and check whether the number is prime or not.

// Programme for primality check

#include <stdio.h>
#include <math.h>

// Function for checking primality
// Returns 1 if prime and 0 if not prime
int prime(int n){
    if(!n)
        return 0;
    // evaluating sqrt of n to reduce time complexity
    // as any value after sqrt(n) is a duplicate factor
    int r = ceil(sqrt(n));
    for(int i=2; i<=r; i++){
        // checking divisiblity for each number upto r
        if(n%i == 0)
            return 0;
    }
    return 1;
}

// Driver code
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(prime(n))
        printf("%d is prime\n", n);
    else
        printf("%d is NOT prime\n", n);
}