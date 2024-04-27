
#include <stdio.h>

void printPattern(int maxNum) {
    // Upper half of the pattern
    for (int i = 1; i <= maxNum; i++) {
        // Print increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing sequence
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    // Lower half of the pattern
    for (int i = maxNum - 1; i >= 1; i--) {
        // Print increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing sequence
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int maxNumber;


    scanf("%d", &maxNumber);

    // Generate the pattern
    printPattern(maxNumber);

    return 0;
}
