#include <stdio.h>

void swap(int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("%d %d\n", num1, num2);
    return 0;
}
