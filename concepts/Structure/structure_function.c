#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int calculateArea(struct Rectangle rect) {
    int area = rect.width * rect.height;
    return area;
}

int main() {
    struct Rectangle myRect = {4, 5};
    int area = calculateArea(myRect);
    printf("The area of the rectangle is: %d\n", area);
    return 0;
}

