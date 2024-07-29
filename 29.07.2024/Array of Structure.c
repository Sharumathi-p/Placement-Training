#include <stdio.h>
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {

    struct Person people[3] = {
        {"John Doe", 30, 5.9},
        {"Jane Smith", 25, 5.5},
        {"Alice Johnson", 28, 5.7}
}
    
    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Height: %.1f feet\n\n", people[i].height);
    }

    return 0;
}
