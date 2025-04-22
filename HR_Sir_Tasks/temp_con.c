#include <stdio.h>

void celsius_to_other(float celsius) {
    printf("Fahrenheit: %.2f\n", (celsius * 9 / 5) + 32);
    printf("Kelvin: %.2f\n", celsius + 273.15);
}

void fahrenheit_to_other(float fahrenheit) {
    printf("Celsius: %.2f\n", (fahrenheit - 32) * 5 / 9);
    printf("Kelvin: %.2f\n", ((fahrenheit - 32) * 5 / 9) + 273.15);
}

void kelvin_to_other(float kelvin) {
    printf("Celsius: %.2f\n", kelvin - 273.15);
    printf("Fahrenheit: %.2f\n", ((kelvin - 273.15) * 9 / 5) + 32);
}

int main() {
    int choice = 0;
    float temp;
    
    while (choice != 4) {
        printf("\nTemperature Conversion Menu:\n");
        printf("1. Convert Celsius to Fahrenheit and Kelvin\n");
        printf("2. Convert Fahrenheit to Celsius and Kelvin\n");
        printf("3. Convert Kelvin to Celsius and Fahrenheit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
                celsius_to_other(temp);
                break;
            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temp);
                fahrenheit_to_other(temp);
                break;
            case 3:
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &temp);
                kelvin_to_other(temp);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    
    return 0;
}
