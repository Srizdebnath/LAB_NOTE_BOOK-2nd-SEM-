#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    
 
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Coefficient 'a' cannot be zero.\n");
        return 1;
    }
    
    float discriminant = b * b - 4 * a * c;
    float realPart, imaginaryPart;
    
    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Your Equation is %.0fx^2 ", a);
        if (b < 0)
            printf("- %.0fx ", -b);
        else
            printf("+ %.0fx ", b);
        if (c < 0)
            printf("- %.0f\n", -c);
        else
            printf("+ %.0f\n", c);
        printf("Root1: %.2f\n", root1);
        printf("Root2: %.2f\n", root2);
    } else if (discriminant == 0) {
        float root = -b / (2 * a);
        printf("Your Equation is %.0fx^2 ", a);
        if (b < 0)
            printf("- %.0fx ", -b);
        else
            printf("+ %.0fx ", b);
        if (c < 0)
            printf("- %.0f\n", -c);
        else
            printf("+ %.0f\n", c);
        printf("Root: %.2f\n", root);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Your Equation is %.0fx^2 ", a);
        if (b < 0)
            printf("- %.0fx ", -b);
        else
            printf("+ %.0fx ", b);
        if (c < 0)
            printf("- %.0f\n", -c);
        else
            printf("+ %.0f\n", c);
        printf("Root1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}


