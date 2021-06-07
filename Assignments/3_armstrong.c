//Experiment 3 - Read a natural number and check whether the given number is Armstrong or not.

// Checking if a number is Armstrong Number {sum of cubes of digits =  number itself}
#include <stdio.h>

void main(){
    int n, temp_n, sum = 0;
    // Handling user input
    printf("Input number: ");
    scanf("%d", &n);
    // storing n in different variable to modify
    temp_n = n;
    while(temp_n > 0){
        // extracting each digit and adding its cube to 'sum'
        int d = temp_n%10;
        sum += d*d*d;
        temp_n /= 10;
    }
    if(n == sum)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);
}