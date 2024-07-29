#include <stdio.h>

void checkBalance(float balance) {
    printf("Your balance is: $%.2f\n", balance);
}

float deposit(float balance, float amount) {
    balance += amount;
    printf("Deposited: $%.2f\n", amount);
    printf("New balance: $%.2f\n", balance);
    return balance;
}

float withdraw(float balance, float amount) {
    if (amount > balance) {
        printf("Insufficient balance!\n");
    } else {
        balance -= amount;
        printf("Withdrew: $%.2f\n", amount);
        printf("New balance: $%.2f\n", balance);
    }
    return balance;
}

int main() {
    float balance = 1000.0; // Initial balance
    int choice;
    float amount;

    while (1) {
        printf("\nBanking System Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance = deposit(balance, amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                balance = withdraw(balance, amount);
                break;
            case 4:
                printf("Thank you for using the banking system!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
