
#include <stdio.h>

void printFlippedInvertedPyramid(int rows) {
    int i, j, k;

    // Loop through each row
    for (i = 0; i < rows; i++) {
        // Print spaces before stars
        for (j = 0; j < i; j++) {
            printf("  ");
        }

        // Print stars
        for (k = 0; k < rows - i; k++) {
            printf("* ");
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    // Input the number of rows

    scanf("%d", &numRows);

    // Generate the pattern
    printFlippedInvertedPyramid(numRows);

    return 0;
}
