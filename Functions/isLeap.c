#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int isLeap(int year) {
    // Check if the year is divisible by 4
    if (year % 4 == 0) {
        // If divisible by 100, it's a leap year only if also divisible by 400
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1; // Leap year
            else
                return 0; // Not a leap year
        } else {
            return 1; // Leap year
        }
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int year;
  
    scanf("%d", &year);
    
    if (isLeap(year)) {
        printf("The Year %d is a Leap Year\n", year);
    } else {
        printf("It is not a Leap Year\n");
    }
    
    return 0;
}
