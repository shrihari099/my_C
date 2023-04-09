#include <stdio.h>

// Define a Rectangle structure with width and height properties
struct Rectangle {
    int width;
    int height;
};

// A function that takes a pointer to a Rectangle structure and sets its dimensions
void setDimensions(struct Rectangle* rect, int w, int h) {
    rect->width = w;   // Set the width of the Rectangle structure
    rect->height = h;  // Set the height of the Rectangle structure
}

// A function that takes a Rectangle structure and returns its area
int calculateArea(struct Rectangle rect) {
    int area = rect.width * rect.height;  // Calculate the area of the Rectangle structure
    return area;                         // Return the area
}

int main() {
    struct Rectangle myRect;  // Declare a Rectangle structure with width and height
    struct Rectangle* rectPtr = &myRect;  // Declare a pointer to the Rectangle structure and initialize it to the address of myRect

    setDimensions(rectPtr, 4, 5);  // Call the setDimensions function with the pointer to myRect and set its dimensions
    int area = calculateArea(myRect);  // Call the calculateArea function with myRect and get its area
    printf("The area of the rectangle is: %d\n", area);  // Print the area of the Rectangle structure

    return 0;
}

