#include <stdio.h>

int main() {
    char choice;
    printf("Do you want to calculate Area (a) or Volume (v)? Enter 'a' or 'v': ");
    scanf(" %c", &choice);

    if (choice == 'a') {
        char shape;
        printf("Choose the shape: square (s), triangle (t), or rectangle (r): ");
        scanf(" %c", &shape);

        if (shape == 's') {
            double side;
            printf("Enter the length of the side of the square: ");
            scanf("%lf", &side);
            double area = side * side;
            printf("The area of the square is: %.2lf\n", area);
        } else if (shape == 't') {
            double base, height;
            printf("Enter the base length of the triangle: ");
            scanf("%lf", &base);
            printf("Enter the height of the triangle: ");
            scanf("%lf", &height);
            double area = 0.5 * base * height;
            printf("The area of the triangle is: %.2lf\n", area);
        } else if (shape == 'r') {
            double length, width;
            printf("Enter the length of the rectangle: ");
            scanf("%lf", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%lf", &width);
            double area = length * width;
            printf("The area of the rectangle is: %.2lf\n", area);
        } else {
            printf("Invalid shape choice.\n");
        }
    } else if (choice == 'v') {
        printf("Volume calculation is not implemented in this version.\n");
    } else {
        printf("Invalid choice. Please enter 'a' or 'v'.\n");
    }

    return 0;
}
