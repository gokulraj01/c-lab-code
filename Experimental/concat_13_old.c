//Experiment 13 - Concatenate two strings without using library functions.
#include <stdio.h>

#define ARR_LEN 256

//  concatinating two strings
void main(){
    char a[ARR_LEN], b[ARR_LEN], c[2*ARR_LEN];
    //  input two strings
    printf("Enter 2 Strings: ");
    scanf("%s %s", &a, &b);

    int concat_index = 0, index = 0;
    //  loop through 1st string
    while(a[index] != '\0')
        c[concat_index++] = a[index++];
    //  loop through 2nd string
    index = 0;
    while(b[index] != '\0')
        c[concat_index++] = b[index++];
    //  adding null charecter at the end
    c[concat_index] = '\0';

    printf("Concat string is: %s", c);
}