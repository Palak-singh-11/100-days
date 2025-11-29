//Q150:Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;          // Normal structure variable
    struct Employee *ptr;         // Pointer to structure

    ptr = &emp;                   // Point pointer to the structure variable

    // Modify structure members using pointer and -> operator
    printf("Enter Employee ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Employee Name: ");
    scanf("%s", ptr->name);

    printf("Enter Salary: ");
    scanf("%f", &ptr->salary);

    // Display structure details using pointer
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
