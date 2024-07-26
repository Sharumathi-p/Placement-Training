#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char test_str[] = "madam";
    if (is_palindrome(test_str)) {
        printf("'%s' is a palindrome\n", test_str);
    } else {
        printf("'%s' is not a palindrome\n", test_str);
    }
    return 0;
}
