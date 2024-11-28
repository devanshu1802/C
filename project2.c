#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int isAvailable;
};

void addBook();
void displayBooks();
void borrowBook();
void returnBook();

const char *filename = "library.dat";

int main() {
    int choice;
    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: borrowBook(); break;
            case 4: returnBook(); break;
            case 5: exit(0); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void addBook() {
    struct Book book;
    FILE *file = fopen(filename, "ab");
    if (!file) {
        printf("Could not open file.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &book.id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]s", book.title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]s", book.author);
    book.isAvailable = 1;

    fwrite(&book, sizeof(struct Book), 1, file);
    fclose(file);
    printf("Book added successfully!\n");
}

void displayBooks() {
    struct Book book;
    FILE *file = fopen(filename, "rb");
    if (!file) {
        printf("Could not open file.\n");
        return;
    }

    printf("\n%-10s %-30s %-30s %s\n", "Book ID", "Title", "Author", "Availability");
    while (fread(&book, sizeof(struct Book), 1, file)) {
        printf("%-10d %-30s %-30s %s\n", book.id, book.title, book.author, 
               book.isAvailable ? "Available" : "Not Available");
    }
    fclose(file);
}

void borrowBook() {
    int bookID;
    struct Book book;
    int found = 0;
    FILE *file = fopen(filename, "rb+");
    if (!file) {
        printf("Could not open file.\n");
        return;
    }

    printf("Enter Book ID to borrow: ");
    scanf("%d", &bookID);

    while (fread(&book, sizeof(struct Book), 1, file)) {
        if (book.id == bookID) {
            found = 1;
            if (book.isAvailable) {
                book.isAvailable = 0;
                fseek(file, -sizeof(struct Book), SEEK_CUR);
                fwrite(&book, sizeof(struct Book), 1, file);
                printf("Book borrowed successfully!\n");
            } else {
                printf("Book is already borrowed by someone else.\n");
            }
            break;
        }
    }
    if (!found) {
        printf("Book not found!\n");
    }
    fclose(file);
}

void returnBook() {
    int bookID;
    struct Book book;
    int found = 0;
    FILE *file = fopen(filename, "rb+");
    if (!file) {
        printf("Could not open file.\n");
        return;
    }

    printf("Enter Book ID to return: ");
    scanf("%d", &bookID);

    while (fread(&book, sizeof(struct Book), 1, file)) {
        if (book.id == bookID) {
            found = 1;
            if (!book.isAvailable) {
                book.isAvailable = 1;
                fseek(file, -sizeof(struct Book), SEEK_CUR);
                fwrite(&book, sizeof(struct Book), 1, file);
                printf("Book returned successfully!\n");
            } else {
                printf("This book is not currently borrowed.\n");
            }
            break;
        }
    }
    if (!found) {
        printf("Book not found!\n");
    }
    fclose(file);
}
