#include <stdio.h>

void printNumberPattern(int rows) {
    int i, j;

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int numRows;


    scanf("%d", &numRows);

    // Generate the pattern
    printNumberPattern(numRows);

    return 0;
}

