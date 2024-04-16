#include <stdio.h>
int main (){
    float p,r,t, simple_interest;
    printf("Enter the principle value: ");
    scanf("%f", &p);
     printf("Enter the rate value: ");
    scanf("%f", &r);
     printf("Enter the time value: ");
    scanf("%f", &t);
    simple_interest = (p*r*t)/100;
    printf("simple interest = %.2f\n", simple_interest);
    return 0;
}