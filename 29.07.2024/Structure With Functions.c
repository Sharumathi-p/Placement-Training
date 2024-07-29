#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    int year;
};
void printBook(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Year: %d\n", book.year);
}
void updateBookYear(struct Book *book, int year) {
    book->year = year; 
}

int main() {
    struct Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 1925};
    printBook(book1);
    updateBookYear(&book1, 2021);
    printf("\nUpdated Book Information:\n");
    printBook(book1);

    return 0;
}
