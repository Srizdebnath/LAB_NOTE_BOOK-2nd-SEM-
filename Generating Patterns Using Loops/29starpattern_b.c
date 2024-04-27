#include <stdio.h>

int main() {
    int rows;

    scanf("%d", &rows);

    // Loop for each row
    for (int i = 1; i <= rows; ++i) {
        // Loop to print spaces
        for (int j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        // Loop to print '*' for each column in the current row
        for (int k = 1; k <= i; ++k) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}
