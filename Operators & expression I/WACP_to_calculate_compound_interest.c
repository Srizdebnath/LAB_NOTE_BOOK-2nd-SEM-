#include <stdio.h>
#include <math.h>

int main() {
    float p,r,t,ci;
    printf("Enter the principle amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &r);
    printf("Enter the time period (in years): ");
    scanf("%f", &t);
    ci = p * (pow((1 + r / 100), t)) - p;
    printf("Compound interest = %.2f\n", ci);
    return 0;
}
