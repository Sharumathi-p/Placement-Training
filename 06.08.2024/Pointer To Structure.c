#include <stdio.h>
typedef struct {
    char name[50];
    int age;
} Person;
void displayPerson(Person *p) {
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
}
int main() {
    Person person;
    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);
    person.name[strcspn(person.name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &person.age);
    displayPerson(&person);
    return 0;
}
