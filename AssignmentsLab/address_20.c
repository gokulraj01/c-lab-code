// Author: Gokul Raj, 235, R2A, CSE

// Experiment 20 - Display the address of a person using Union.
#include <stdio.h>

#define ARR_LEN 256

union address{
    char name[ARR_LEN];
    char house[ARR_LEN];
    char city[ARR_LEN];
    char state[ARR_LEN];
    char pin[10];
};

void input(char* prompt, char* dest, size_t size){
    printf("%s: ", prompt);
    fgets(dest, size, stdin);
    size_t pos = 0;
    while(dest[++pos] != '\n');
    dest[pos] = '\0';
}


void main(){
    union address add;
    printf("Enter following Details:\n");
    input("Enter Name", add.name, ARR_LEN);
    input("House Name", add.house, ARR_LEN);
    input("City", add.city, ARR_LEN);
    input("State", add.state, ARR_LEN);
    input("Pin Code", add.pin, 10);

    printf("%s %s %s %s %s", add.name, add.house, add.city, add.state, add.pin);
}