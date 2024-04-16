#include <stdio.h>
#define PI 3.14159
int main() {
    float rad, area, ci;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    area = PI * rad * rad;
    ci = 2 * PI * rad;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", ci);
    return 0;
}
