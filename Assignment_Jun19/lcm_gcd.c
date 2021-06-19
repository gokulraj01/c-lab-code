// Experiment 2
// ------------
// Algorithm to evaluate GCD and LCM of two given numbers

#include <stdio.h>

// LCM GCD evaluate
void main(){
    // declare variables
    int n1, n2, a, b;
    printf("Enter 2 numbers to check LCM and GCD: ");
    scanf("%d %d", &n1, &n2);

    // store n1 and n2 for later before manipulation
    a = n1; b = n2;

    // infinite loop until one of the numbers reaches 0
    while(1){
        // pick the largest number and replace it with itself modulo the other number 
        if(n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;

        // if any number reaches 0, print the other number as gcd
        // using Eucledian Theorem a * b = lcm(a, b) * hcf(a, b)
        // to evaluate LCM given HCF and two initial numbers
        if(n1 == 0){
            int lcm = a*b/n2;
            printf("GCD: %d\nLCM: %d\n", n2, lcm);
            break;
        }
        if(n2 == 0){
            int lcm = a*b/n1;
            printf("GCD: %d\nLCM: %d\n", n1, lcm);
            break;
        }
    }
}