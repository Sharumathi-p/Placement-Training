#include <stdio.h>
#define MAX_STUDENTS 3
typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar();
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}
