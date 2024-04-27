
#include <stdio.h>

void printTriangle(int rows) {
    int i, j, k;

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= i; k++) {
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
    printTriangle(numRows);

    return 0;
}
