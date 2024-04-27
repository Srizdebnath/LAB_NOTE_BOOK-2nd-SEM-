#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int num1, num2;


    scanf("%d %d", &num1, &num2);

    int gcd = 1; // Initialize gcd to 1, as 1 is always a common divisor

    // Find the greatest common divisor
    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("gcd(%d,%d) = %d\n", num1, num2, gcd);

    return 0;
}
