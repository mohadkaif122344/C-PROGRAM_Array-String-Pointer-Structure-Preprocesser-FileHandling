/*
5.Write a program to read and print an Employee‟s Details using Structure. 
*/
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int employeeID;
    float salary;
    char department[50];
};
int main() {
   
    struct Employee emp;
    
    printf("Enter employee details:\n");

    printf("Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0; 
    printf("Employee ID: ");
    scanf("%d", &emp.employeeID);
    printf("Salary: ");
    scanf("%f", &emp.salary);
    getchar(); 
    printf("Department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    emp.department[strcspn(emp.department, "\n")] = 0; 
    
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.employeeID);
    printf("Salary: %.2f\n", emp.salary);
    printf("Department: %s\n", emp.department);
    return 0;
}