// Author: Gokul Raj, 235, R2A, CSE

// Experiment 16 - Print employee details using structure.
#include <stdio.h>

#define ARR_LEN 256

// Define a "employee" structure 
struct employee
{
    char name[ARR_LEN];
    int age;
    char gender;
    int salary;
    char post[ARR_LEN];
    int id;
};

void main(){
    // define array of employee structs
    struct employee list[ARR_LEN];
    int n, str_i = 0;

    // start struct data input
    printf("Enter employee count: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nEnter details of Employee %d\n-----\n", i+1);

        printf("Name: ");
        // flush buffer to fix prev. newline induced prompt bypass
        fflush(stdin);
        fgets(list[i].name, ARR_LEN, stdin);
        // routine to remove residual new line char in name input
        while(list[i].name[++str_i] != '\n');
        list[i].name[str_i] = '\0';

        printf("ID: ");
        scanf("%d", &list[i].id);

        printf("Age: ");
        scanf("%d", &list[i].age);

        printf("Gender: ");
        // flush buffer to prevent premature closing of prompt
        fflush(stdin);
        scanf("%c", &list[i].gender);

        printf("Salary: ");
        scanf("%d", &list[i].salary);

        printf("Designation: ");
        // flush buffer again to fix prev. newline induced prompt bypass
        fflush(stdin);
        fgets(list[i].post, ARR_LEN, stdin);
        // routine to remove residual new line char in designation input
        str_i = 0;
        while(list[i].post[++str_i] != '\n');
        list[i].post[str_i] = '\0';
    }

    for(int i=0; i<n; i++)
        // print data
        printf("\nName: %s\nAge: %d\nID: %d\nDesignation: %s\nGender: %c\nSalary: %d\n\n", list[i].name, list[i].age, list[i].id, list[i].post, list[i].gender, list[i].salary);
}