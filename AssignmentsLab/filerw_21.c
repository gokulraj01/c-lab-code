// Author: Gokul Raj, 235, R2A, CSE

/*
Experiment 21 - Create a file and perform the following :
                a)Write data to the file.
                b)Read the data in a given file & display the content on console.
                c)Append new data and display on console.
*/

#include <stdio.h>

#define ARR_LEN 256

void showFile(FILE *f){
    fseek(f, 0, SEEK_SET);
    printf("\n--- FILE START ---\n");
    // Read file upto end
    while(!feof(f))
        putc(getc(f), stdout);
    printf("\n---- FILE END ----");
}

void main(){
    // Open a file sample.txt in R/W mode
    FILE *f;
    f = fopen("sample.txt", "w+");
    if(f == NULL){
        printf("Error Opening File!!");
        return;
    }

    fprintf(f, "Hello World.\nThis is a sample file."); // Write data
    printf("Before Append:");
    showFile(f);    // Read file data

    // Reopen file sample.txt in R/A mode
    fclose(f);
    f = fopen("sample.txt", "a+");
    if(f == NULL){
        printf("Error Opening File!!");
        return;
    }
    
    fprintf(f, "\nThis is appended.");  // Append a line
    printf("\n\nAfter Append:");
    showFile(f);    // Read file data
}