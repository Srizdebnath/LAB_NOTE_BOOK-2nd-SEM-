#include <stdio.h>

void printNumberPattern(int rows) {
    int i, j, k, num, space;

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Print numbers in increasing order
        num = i;
        for (j = 1; j <= i; j++) {
            printf("%d", num++);
            if (j < i) {
                printf(" ");
            }
        }

        // Print numbers in decreasing order except for the first row
        if (i > 1) {
            num -= 2;
            for (k = 1; k < i; k++) {
                printf(" %d", num--);
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