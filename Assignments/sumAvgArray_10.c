// Author: Gokul Raj, 235, R2A, CSE

//Experiment 10 - Find the sum and average of numbers in an array.
#include <stdio.h>

//  Defining arbitrarily sufficient size for arrays
#define ARR_LEN 256

// Program to display sum and average of integers in an array
void main(){
    int len, arr[ARR_LEN], sum = 0;
    double avg = 0;
    printf("Enter array size: ");
    scanf("%d", &len);
    //  loop to initialize all elements as per input of user
    for(int i=0; i<len; i++){
        printf("Enter value of element %d: ", i);;
        scanf("%d", &arr[i]);
    }
    //  traversing array and evaluating sum
    //  intentionally starting 2nd loop to satisfy experimental requirement
    for(int i=0; i<len; i++)
        sum += arr[i];
    avg = (double)sum/len;
    printf("Sum is %d.\nAverage is %f\n", sum, avg);
}
