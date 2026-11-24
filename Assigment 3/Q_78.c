#include <stdio.h>

struct Book {
    int id;
    char title[100];
    char author[100];
    float price;
};

void readBook(struct Book *b) {
    printf("Enter Book ID: ");
    scanf("%d", &b->id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", b->title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", b->author);
    printf("Enter Price: ");
    scanf("%f", &b->price);
}

void displayBook(const struct Book *b) {
    printf("\n--- Book Details ---\n");
    printf("ID:     %d\n", b->id);
    printf("Title:  %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Price:  %.2f\n", b->price);
}

int main() {
    struct Book myBook;
    readBook(&myBook);
    displayBook(&myBook);
    return 0;
}