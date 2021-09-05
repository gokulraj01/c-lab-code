// Author: Gokul Raj, 235, R2A, CSE

//Experiment 14 - Concatenate two strings without using library functions.

#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    // Input strings
   char str1[ARR_LEN], str2[ARR_LEN];
   printf("Enter string 1: ");
   fgets(str1, ARR_LEN, stdin);
   printf("Enter string 2: ");
   fgets(str2, ARR_LEN, stdin);

    // get length of str1
   int offset = 0;
   while(str1[++offset] != '\n');

    // append str2 to end of str1
   for(int i=0; str2[i] != '\n'; i++)
       str1[offset++] = str2[i];
   str1[offset] = '\0';
    
    // print str1 which is now str1+str2
   printf("str1: %s, str2: %s\n", str1, str2);
}