#include <stdio.h>
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    int choice;
    float temperature;

    printf("Temperature Conversion Menu\n");
    printf("1.Fahrenheit To Celsius\n");
    printf("2. Celsius To Fahrenheit\n");
    printf("Enter Your Choice (1 or 2):\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit:\n");
        scanf("%f", &temperature);
        float celsius = fahrenheit_to_celsius(temperature);
        printf("The temperature in celsius is: %.2f\n", celsius);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius:\n");
        scanf("%f", &temperature);
        float fahrenheit = celsius_to_fahrenheit(temperature);
        printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}