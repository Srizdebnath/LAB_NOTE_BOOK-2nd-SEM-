#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Before swapping: num1 = %d, num2 = %d\n", a, b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: num1 = %d, num2 = %d\n", a,b);
    return 0;
}
