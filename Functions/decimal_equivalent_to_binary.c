#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

void decimalToBinary(int decimal) {
    // Define an array to store the binary digits
    int binary[32];
    int i = 0;
    
    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    
    scanf("%d", &decimal);
    

    decimalToBinary(decimal);
    
    return 0;
}
