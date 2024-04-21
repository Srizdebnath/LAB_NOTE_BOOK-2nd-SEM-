#include <stdio.h>
long long int sumOfDiagonals(int n) {
    long long int sum = 1;
    for (int i = 1; i <= (n -1) / 2; i++) {
        sum += (16 * i * i + 4 * i + 4);
    }
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", sumOfDiagonals(n));
    return 0;
}