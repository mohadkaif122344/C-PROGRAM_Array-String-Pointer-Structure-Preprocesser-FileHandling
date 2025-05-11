/*Ques 3. Write a program to read RollNo, Name, Address, Age & average-marks of 12 
students in the BCA class and display the details from function.
*/
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float avgMarks;
};

void displayStudentDetails(struct Student students[], int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %.2f\n", students[i].avgMarks);
        printf("\n");
    }
}
int main() {
    
    struct Student students[12];
   
    for (int i = 0; i < 12; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar(); 

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 

        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);
        students[i].address[strcspn(students[i].address, "\n")] = 0; 

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Average Marks: ");
        scanf("%f", &students[i].avgMarks);
        getchar(); 

        printf("\n");
    }
    displayStudentDetails(students, 12);
    return 0;
}