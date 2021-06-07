//Experiment 8 - Odd or even depending on an integer value.
#include <stdio.h>

// Program to check parity
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    //  Even if divisible by 2
    if(n%2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");
}