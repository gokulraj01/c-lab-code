// Author: Gokul Raj, 235, R2A, CSE

//Experiment 15 - Count the number of vowels, consonants and spaces in a string.

#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    // get one line input
   char str[ARR_LEN];
   fgets(str, ARR_LEN, stdin);

   int vow=0, con=0, spc=0, oth=0;

    // loop until end of string
   for(int i=0; str[i] != '\0'; i++){
       char curr = str[i];
       // check if alphabet
       if((curr >= 'A' && curr <= 'Z') || (curr >= 'a' && curr <= 'z')){
           // make uppercase
           if(curr >= 'a')
               curr -= 32;
            // check if vowel
           if(curr == 'A' || curr == 'E' || curr == 'I' || curr == 'O' || curr == 'U')
               vow++;
            // else it's a consonant
           else
               con++;
       }
       // 32 is ascii for space. Checking space
       else if(curr == 32)
           spc++;
        // else some other char
       else
           oth++;
   }

   printf("Vowels: %d\nConsonants: %d\nSpaces: %d\nOthers: %d\n", vow, con, spc, oth);
}