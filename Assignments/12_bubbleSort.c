//Experiment 12 - Sort the elements in an array using Bubble Sort.
#include <stdio.h>
#include <stdbool.h>

#define ARR_LEN 256

// function to dump array as human readable text to console
void arr_show (int arr[], int n){
    printf("Array: [ ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

//  implementation of Bubble Sort Algorithm
int main(){
    int n, elements[ARR_LEN];
    int iter_count = 0;     //  for debug
    bool done_flag = true;  //  initalizing flag to exit if array is already sorted

    //  intialize array elements to sort
    printf("Enter list length [MAX=256]: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Enter ele %d: ", (i+1));
        scanf("%d", &elements[i]);
    }
    
    //  outer loop to traverse array
    for(int i=0; i<n; i++){
        iter_count++;
        //  reseting flag
        done_flag = true;
        //  inner loop for sorting position
        for(int j=0; j<n-i-1; j++){
            if(elements[j] > elements[j+1]){
                //  swapping elements of pos j and pos j+1
                done_flag = false;
                int temp = elements[j+1];
                elements[j+1] = elements[j];
                elements[j] = temp;
                // printf("SWAP: [%d with %d]\n",elements[j+1] ,elements[j]);   //for debug
                arr_show(elements, n);
            }
        }
        // printf("----\n");
        //  Check if sort done. If so, exit.
        if(done_flag){
            printf("Sort done in %d iterations\n", iter_count);
            break;
        }
    }

    //sorting done....display elements
    arr_show(elements, n);
}