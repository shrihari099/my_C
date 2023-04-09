#include <stdio.h>

// Define a structure to represent a book
struct Book {
    unsigned int numPages : 16;  // 16 bits for number of pages
    unsigned int numChapters : 8; // 8 bits for number of chapters
    unsigned int hardCover : 1; // 1 bit for hardcover (0 = false, 1 = true)
};

int main() {
    // Declare a book
    struct Book myBook = {500, 10, 1}; // 500 pages, 10 chapters, hardcover
    
    // Print the book's attributes
    printf("Number of pages: %u\n", myBook.numPages);
    printf("Number of chapters: %u\n", myBook.numChapters);
    printf("Hardcover: %s\n", myBook.hardCover ? "Yes" : "No");

    return 0;
}

