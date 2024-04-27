#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n, count = 1, sum = 0;

    scanf("%d", &n);

    while (n > 0) {
        sum += count;
        count += 2; // Incrementing by 2 to get the next odd number
        n--;
    }

    printf("%d\n", sum);
    return 0;
}
