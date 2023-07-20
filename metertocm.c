#include <stdio.h>

int main() {
    double meters, centimeters;

    // Input length in meters
    printf("Enter length in meters: ");
    scanf("%lf", &meters);

    // Convert meters to centimeters
    centimeters = meters * 100;

    // Display the result
    printf("%.2lf meters is equal to %.2lf centimeters.\n", meters, centimeters);

    return 0;
}
