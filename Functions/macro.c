#include<stdio.h>

#define LARGE(a, b, c) ((a > b ? (a > c ? a : c) : (b > c ? b : c)))

int main(void) {
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);
    result = LARGE(a, b, c);
    printf("%d\n", result);
    return 0;
}
