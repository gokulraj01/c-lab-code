// Experiment 3
// ------------
// Prepare a C program using switch-case,for checking the corresponding colour for the input character and print the name of the colour,
// using case statements.(Use R for Red, B for blue, G for Green etc. Assume there are 7 possible colours)

#include <stdio.h>

void main(){
    // declare charecter variable c
    char c;
    printf("Available codes : VIBGYOR\nEnter a Color Code: ");
    scanf("%c", &c);
    //  if lowercase, make uppercase
    //     check if charecter appears after charCode 96
    //     as 'a' is 97
    if(c > 96)
        //  subtract 32 to make uppercase
        c -= 32;
    
    //  switch case to check color code and
    //  print apporpriate whole color name
    switch(c){
        case 'V':
            printf("Violet\n");
            break;
        case 'I':
            printf("Indigo\n");
            break;
        case 'B':
            printf("Blue\n");
            break;
        case 'G':
            printf("Green\n");
            break;
        case 'Y':
            printf("Yellow\n");
            break;
        case 'O':
            printf("Orange\n");
            break;
        case 'R':
            printf("Red\n");
            break;
        //  default if unidentified color code given
        default:
            printf("Undefined Color Code!!");
    }
}