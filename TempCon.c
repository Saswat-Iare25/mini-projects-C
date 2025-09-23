#include <stdio.h>

int main() {
    float temp;
    char choice;
    printf("Enter C to convert Celsius→Fahrenheit, F for Fahrenheit→Celsius: ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        printf("Fahrenheit: %.2f\n", (temp * 9 / 5) + 32);
    } else if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("Celsius: %.2f\n", (temp - 32) * 5 / 9);
    } else {
        printf("Invalid choice!\n");
    }
    return 0;
}
