// Author: Gokul Raj, 235, R2A, CSE

//Experiment 3 - Read a natural number and check whether the given number is Armstrong or not.

// Checking if a number is Armstrong Number {sum of cubes of digits =  number itself}
#include <stdio.h>
#include <math.h>

int power(int a, int x){
    int op = 1;
    for(int i=0; i<x; i++)
        op = op*a;
    return op;
}

void main(){
    int n, temp_n, sum = 0;
    // Handling user input
    printf("Input number: ");
    scanf("%d", &n);
    // storing n in different variable to modify
    temp_n = n;
    // find number of digits in n
    int exp = (int)log10(n) + 1;
    while(temp_n > 0){
        // extracting each digit and adding its cube to 'sum'
        int d = temp_n%10;
        sum += power(d, exp);
        temp_n /= 10;
    }
    if(n == sum)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);
}