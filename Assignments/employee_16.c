// Author: Gokul Raj, 235, R2A, CSE

//Experiment 16 - Print employee details using structure.
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

// function to display an "employee" structure data
void show_emp(struct employee e){
    printf("Name: %s\nAge: %d\nID: %d\nDesignation: %s\nGender: %c\nSalary: %d\n\n", e.name, e.age, e.id, e.post, e.gender, e.salary);
}

void main(){
    // init 3 employees in struct employee
    struct employee e1 = {"John Doe", 42, 'M', 25000, "Supervisor", 2377};
    struct employee e2 = {"Alice John", 29, 'F', 50000, "Manager", 5299};
    struct employee e3 = {"Jack Frost", 50, 'M', 98000, "CEO", 4845};

    // call fn to display all of them
    show_emp(e1);
    show_emp(e2);
    show_emp(e3);
}