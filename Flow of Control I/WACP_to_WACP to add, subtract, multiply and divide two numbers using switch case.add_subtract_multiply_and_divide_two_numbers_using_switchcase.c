#include <stdio.h>

int main() {
    char choice;
    float num1, num2, result;

    
    scanf(" %c", &choice);

    
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 'a':
            result = num1 + num2;
            printf("%.2f\n", result);
            break;
        case 'b':
            result = num1 - num2;
            printf("%.2f\n", result);
            break;
        case 'c':
            result = num1 * num2;
            printf("%.2f\n", result);
            break;
        case 'd':
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2f\n", result);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
