#include <stdio.h>

int main() {
    int num, sum;
    printf("Enter the no.: ");
    scanf("%d", &num);
    sum = (num / 10000) % 10 + (num / 1000) % 10 + (num / 100) % 10 + (num / 10) % 10 + num % 10;
    printf("%d\n", sum);
    return 0;
}

