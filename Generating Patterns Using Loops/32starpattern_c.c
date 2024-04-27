#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void printPattern(int rows) {
    // Print upper half of the pattern
    for (int i = 0; i < rows / 2; i++) {
        // Print spaces
        for (int j = 0; j < i * 2; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 0; k < rows / 2 - i + 1; k++) {
            printf("* ");
        }

        printf("\n");
    }

    // Print lower half of the pattern
    for (int i = rows / 2; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < i * 2; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 0; k < rows / 2 - i + 1; k++) {
            printf("* ");
        }

        printf("\n");
    }
}

int main() {
    int numRows;

 
    scanf("%d", &numRows);

    // Generate the pattern
    printPattern(numRows);

    return 0;
}