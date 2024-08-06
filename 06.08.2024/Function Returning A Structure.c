#include <stdio.h>
typedef struct {
    char name[50];
    int age;
} Person;
Person createPerson(char *name, int age) {
    Person p;
    snprintf(p.name, sizeof(p.name), "%s", name);
    p.age = age;
    return p;
}
int main() {
    Person person = createPerson("Alice", 30);
    printf("Person Information:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    return 0;
}
