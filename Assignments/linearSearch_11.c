// Author: Gokul Raj, 235, R2A, CSE

//Experiment 11 - Search an element in  an array using Linear Search.
#include <stdio.h>

//  Defining arbitrarily sufficient size for arrays
#define ARR_LEN 256

// Implementing Linear Search for an array/list
int main(){
    int len, arr[ARR_LEN];
    int term;
    printf("Enter array size: ");
    scanf("%d", &len);
    //  loop to initialize all elements as per input of user
    for(int i=0; i<len; i++){
        printf("Enter value of element %d: ", i);;
        scanf("%d", &arr[i]);
    }
    printf("ARRAY INITIALIZED\n----------\nEnter search term: ");
    scanf("%d", &term);

    // loop to search
    for(int i=0; i<len; i++){
        if(arr[i] == term){
            printf("Found %d at pos %d\n", term, i);
            return 1;
        }
    }

    // if program reaches this point => loop not broken => term not found
    printf("NOT FOUND\n");
    return 0;
}