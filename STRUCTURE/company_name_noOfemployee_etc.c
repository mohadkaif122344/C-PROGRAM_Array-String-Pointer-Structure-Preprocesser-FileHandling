/* 1.Write a program to create a structure named company which has name, address, 
phone and noOfEmployee as member variables. Read name of company, its 
address, phone and noOfEmployee. Finally display these members value.*/
 
#include <stdio.h>
#include <string.h>

struct company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};
int main() {
   
    struct company comp;
   
    printf("Enter the name of the company: ");
    fgets(comp.name, sizeof(comp.name), stdin);
    comp.name[strcspn(comp.name, "\n")] = 0; 

    printf("Enter the address of the company: ");
    fgets(comp.address, sizeof(comp.address), stdin);
    comp.address[strcspn(comp.address, "\n")] = 0; 

    printf("Enter the phone number of the company: ");
    fgets(comp.phone, sizeof(comp.phone), stdin);
    comp.phone[strcspn(comp.phone, "\n")] = 0; 

    printf("Enter the number of employees: ");
    scanf("%d", &comp.noOfEmployee);
    printf("\nCompany Details:\n");
    printf("Name: %s\n", comp.name);
    printf("Address: %s\n", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployee);

    return 0;
}