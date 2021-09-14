// Author: Gokul Raj, 235, R2A, CSE

//Experiment 16 - Print employee details using structure.
#include <stdio.h>

#define ARR_LEN 256
#define LIST_LEN 3

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
    int id = LIST_LEN+1;
    // init 3 employees in array of struct employee
    struct employee employee_list[LIST_LEN] = {
        {"John Doe", 42, 'M', 25000, "Supervisor", 2377},
        {"Alice John", 29, 'F', 50000, "Manager", 5299},
        {"Jack Frost", 50, 'M', 98000, "CEO", 4845}
    };
    while(id > LIST_LEN){
        printf("Enter employee index to view (MAX: %d): ", LIST_LEN);
        scanf("%d", &id);
    }

    // call fn to display corresponding employee
    printf("\nName: %s\nAge: %d\nID: %d\nDesignation: %s\nGender: %c\nSalary: %d\n\n", employee_list[id-1].name, employee_list[id-1].age, employee_list[id-1].id, employee_list[id-1].post, employee_list[id-1].gender, employee_list[id-1].salary);
}