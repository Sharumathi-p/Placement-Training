#include<stdio.h>
struct Address {
    char street[50];
    char city[50];
    int zipCode;
};
struct Student {
    char name[50];
    int age;
    struct Address address; 
};

int main() {
    struct Student student1 = {
        "John Doe", 
        20, 
        {"123 Main St", "Springfield", 12345}
    };
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Address: %s, %s, %d\n", 
           student1.address.street, 
           student1.address.city, 
           student1.address.zipCode);

    return 0;
}
