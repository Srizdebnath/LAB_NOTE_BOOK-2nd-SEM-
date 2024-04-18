
#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    printf("Enter 5 no.; ");
    float average;
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    average = (num1 + num2 + num3 + num4 + num5) / 5.0;
    printf("%.2f\n", average);
    return 0;
}

