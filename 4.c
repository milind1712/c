#include <stdio.h>

int main() {
    char gender;

    printf("Enter your gender (M/F): ");
    scanf("%c", &gender);

    if (gender == 'M' || gender == 'm') {
        printf("You are Male.\n");
    } else if (gender == 'F' || gender == 'f') {
        printf("You are Female.\n");
    } else {
        printf("Invalid input. Please enter either 'M' or 'F'.\n");
    }

    return 0;
}
