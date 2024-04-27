#include <stdio.h>

void printPattern(int rows) {
    // Iterate through each row
    for (int i = 0; i < rows; i++) {
        int num = i % 2 == 0 ? 1 : 0; // Starting number depends on row index

        // Iterate through each column
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);

            // Alternate between 0 and 1
            num = num == 0 ? 1 : 0;
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
