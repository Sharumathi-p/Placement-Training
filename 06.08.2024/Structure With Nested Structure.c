#include <stdio.h>
typedef struct {
    char street[100];
    char city[50];
    char state[50];
    int zipCode;
} Address
typedef struct {
    char name[50];
    int age;
    Address address;
} Person;

int main() {
    Person person;
    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);
    person.name[strcspn(person.name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &person.age);
    getchar();

    printf("Enter street: ");
    fgets(person.address.street, sizeof(person.address.street), stdin);
    person.address.street[strcspn(person.address.street, "\n")] = '\0'; 

    printf("Enter city: ");
    fgets(person.address.city, sizeof(person.address.city), stdin);
    person.address.city[strcspn(person.address.city, "\n")] = '\0';

    printf("Enter state: ");
    fgets(person.address.state, sizeof(person.address.state), stdin);
    person.address.state[strcspn(person.address.state, "\n")] = '\0';

    printf("Enter zip code: ");
    scanf("%d", &person.address.zipCode);
    printf("\nPerson Information:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address:\n");
    printf("  Street: %s\n", person.address.street);
    printf("  City: %s\n", person.address.city);
    printf("  State: %s\n", person.address.state);
    printf("  Zip Code: %d\n", person.address.zipCode);
    return 0;
}
