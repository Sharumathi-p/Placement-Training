#include <stdio.h>
typedef struct {
    unsigned int isActive : 1;
    unsigned int level : 4;
    unsigned int id : 7;
} Status;
int main() {
    Status status;
    status.isActive = 1;
    status.level = 15;
    status.id = 127;
    printf("Status:\n");
    printf("Active: %u\n", status.isActive);
    printf("Level: %u\n", status.level);
    printf("ID: %u\n", status.id);
    return 0;
}
