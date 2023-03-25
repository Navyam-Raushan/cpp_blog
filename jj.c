#include <stdio.h>

// Define structure for rectangle
struct rectangle {
    float length;
    float width;
};

// Define structure for triangle
struct triangle {
    float base;
    float height;
};

// Function to calculate area of a rectangle
float rectangle_area(struct rectangle rect) {
    return rect.length * rect.width;
}

// Function to calculate area of a triangle
float triangle_area(struct triangle tri) {
    return 0.5 * tri.base * tri.height;
}

int main() {
    // Create a rectangle object and set its properties
    struct rectangle rect;
    rect.length = 5.0;
    rect.width = 3.0;

    // Create a triangle object and set its properties
    struct triangle tri;
    tri.base = 4.0;
    tri.height = 2.0;

    // Calculate and print the area of the rectangle
    float rect_area = rectangle_area(rect);
    printf("Area of rectangle: %.2f\n", rect_area);

    // Calculate and print the area of the triangle
    float tri_area = triangle_area(tri);
    printf("Area of triangle: %.2f\n", tri_area);

    return 0;
}
