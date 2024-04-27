#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

char convertToLowerToUpper(char ch) {
    // Check if the character is a lowercase alphabet
    if (ch >= 'a' && ch <= 'z') {
        // Convert to uppercase by subtracting the difference between 'a' and 'A'
        return ch - ('a' - 'A');
    } else {
        // Return the character unchanged if it's not a lowercase alphabet
        return ch;
    }
}

int main() {
    char ch;

    scanf("%c", &ch);
    
    printf("%c\n", convertToLowerToUpper(ch));
    
    return 0;
}
