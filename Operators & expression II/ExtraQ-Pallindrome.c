#include <stdio.h>
#include <stdbool.h>
int isPalindrome(int number) {
    int reverse = 0, originalNumber = number;
    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    return originalNumber == reverse;
}

int main() {
    int digits;
    scanf("%d", &digits);

    int lowerBound = 1, upperBound = 1;
    for (int i = 0; i < digits - 1; i++)
        lowerBound *= 10, upperBound *= 10;
    upperBound = upperBound * 10 - 1;

    int largestPalindrome = 0, num1, num2;
    for (int i = upperBound; i >= lowerBound; i--)
        for (int j = i; j >= lowerBound; j--) {
            int product = i * j;
            if (product <= largestPalindrome)
                break;
            if (isPalindrome(product))
                largestPalindrome = product, num1 = i, num2 = j;
        }

    printf("%d = %d x %d\n", largestPalindrome, num1, num2);

    return 0;
}
