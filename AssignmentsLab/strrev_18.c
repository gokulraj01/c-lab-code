// Author: Gokul Raj, 235, R2A, CSE

//Experiment 17 - Reverse a string.

#include <stdio.h>
#include <string.h>

#define ARR_LEN 256

void main(){
    // input a string
    char str[ARR_LEN], rev_str[ARR_LEN];
    printf("Enter string: ");
    scanf("%s", str);

    // get length of string
    int str_len = strlen(str);

    // loop string, copy chars in reverse onto rev_str
    for(int i=0; i<str_len; i++)
        rev_str[i] = str[str_len-i-1];
        
    // null to terminate reversed string
    rev_str[str_len] = '\0';

    printf("Reverse is: %s", rev_str);
}