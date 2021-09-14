// Author: Gokul Raj, 235, R2A, CSE

// Experiment 2 - Read a natural number and check whether the number is prime or not.

// Programme for primality check

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // evaluating sqrt of n to reduce time complexity
    // as any value after sqrt(n) is a duplicate factor
    int r = ceil(sqrt(n));

    for(int i=2; i<=r; i++){
        // checking divisiblity for each number upto r
        if(n%i == 0 && n > 2){
            printf("%d is NOT prime\n", n);
            return 1;
        }
    }
    printf("%d is prime\n", n);
    return 1;
}