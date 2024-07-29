#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
    char department[50];
};
void printEmployee(struct Employee emp) {
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Department: %s\n", emp.department);
}

int main() {
    struct Employee employees[3] = {
        {101, "Alice Brown", 50000.00, "HR"},
        {102, "Bob Smith", 55000.50, "IT"},
        {103, "Charlie Davis", 60000.75, "Finance"}
    };
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printEmployee(employees[i]);
        printf("\n");
    }

    return 0;
}
