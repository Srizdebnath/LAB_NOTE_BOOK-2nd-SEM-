#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int power(int x, int r) {
    int result = 1;
    // Multiply x by itself r times
    for (int i = 0; i < r; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, r;
   
    scanf("%d", &x);
    
    scanf("%d", &r);
    
    printf("%d\n", power(x, r));
    
    return 0;
}

