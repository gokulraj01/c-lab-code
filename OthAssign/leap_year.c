// Experiment 1
// ------------
// Given a four digit number representing a year. Prepare a program to find whether it is a leap year.

#include <stdio.h>

void main(){
    int year;
    printf("Enter a year (eg. 2021): ");
    scanf("%d", &year);
    
    // year is a leap year if it's divisible by 4 but not by 100 or divisible by 400
    if((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is NOT a Leap Year\n", year);
}
