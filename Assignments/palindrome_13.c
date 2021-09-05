// Author: Gokul Raj, 235, R2A, CSE

//Experiment 13 - Check whether the given string is palindrome or not.

#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
   char str[ARR_LEN];
   // Input string
   printf("Enter a string: ");
   scanf("%s", str);

    // length of str
   int len = 0, palin = 1;
   while(str[++len] != '\0');

   for(int i=0; i < len/2; i++){
       if(str[i] != str[len-i-1]){
           palin = 0;
           break;
       }
   }
    // print if plaindrome
   if(palin)
       printf("%s is a palindrome", str);
   else
       printf("%s is NOT a palindrome", str);
}