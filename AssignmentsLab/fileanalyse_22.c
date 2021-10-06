// Author: Gokul Raj, 235, R2A, CSE

// Experiment 22 - Open a text input file and count the number of characters, words and lines in it,
//                 and store the results in an output file.
#include <stdio.h>

#define ARR_LEN 256

void main(){
    FILE *inFile, *outFile;
    inFile = fopen("sample.txt", "r");  // Open a file to read
    outFile = fopen("report.txt", "w"); // Open a file to write result
    if(inFile == NULL){
        printf("Error reading file!!");
        return;
    }
    if(outFile == NULL){
        printf("Unable to write new file!!");
        return;
    }
    char curr;
    unsigned long lines = 0, words = 0, chars = 0;

    // loop through until end of file and classify to words and lines
    while (!feof(inFile)){
        curr = fgetc(inFile);
        chars++;
        
        if(curr == '\n'){   // new line marks start of a line and new word
            lines++;
            words++;
        }
        
        else if(curr == 32) // space marks start of new word
            words++;
    }
    chars--;

    // if charCount is not 0, then we missed detecting 1st word and line
    // Adding 1 to words, lines to compensate
    if(chars > 0){
        lines++;
        words++;
    }

    printf("Lines: %d, Words: %d, Chars: %d\n", lines, words, chars);
    printf("Report saved to report.txt");

    // write result to outFfile
    fprintf(outFile, "Lines: %d\nWords: %d\nChars: %d", lines, words, chars);
    fclose(inFile);
    fclose(outFile);
}