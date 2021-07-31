//Experiment 14 - Count the number of vowels, consonants and spaces in a string.
#include <stdio.h>

#define ARR_LEN 1024

void main(){
    char in_str[ARR_LEN];
    //  input strings
    printf("Enter a string: ");
    fgets(in_str, ARR_LEN, stdin);
    int vow=0, con=0, spc=0, oth=0;
    int index = 0;
    while(in_str[index] != '\0'){
        char curr = in_str[index++];
        /*
            Checking Vowels - a, e, i, o, u
        */
        if (curr == 'a' ||
            curr == 'e' ||
            curr == 'i' ||
            curr == 'o' ||
            curr == 'u' ||
            curr == 'A' ||
            curr == 'E' ||
            curr == 'I' ||
            curr == 'O' ||
            curr == 'U')
            vow++;
        /*
            Checking for A-Z or a-z using ASCII codes:
            A - Z:  65 - 90
            a - z:  97 - 122
        */
        else if((curr > 64 && curr < 91) || (curr > 96 && curr < 123))
            con++;
        //  Checking whitespace charecter at ASCII Code 32
        else if(curr == 32)
            spc++;
        //  some other charecter
        else
            oth++;
    }
    //  output parsed stats
    printf("In string: %s\nVowels: %d\nConsonants: %d\nWhiteSpace: %d\nOther Chars: %d", in_str, vow, con, spc, oth);
}
