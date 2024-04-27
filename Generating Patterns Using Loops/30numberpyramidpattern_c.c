#include <stdio.h>

void printNumberPattern(int rows) {
    int i, j, k;

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print numbers in decreasing order
        for (k = i; k >= 1; k--) {
            printf("%d ", k);
        }

        // Print numbers in increasing order except for the first row
        if (i > 1) {
            for (k = 2; k <= i; k++) {
                printf("%d ", k);
            }
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
