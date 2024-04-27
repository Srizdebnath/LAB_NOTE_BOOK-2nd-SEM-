
int main() {
    int n, factorial = 1;

    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    if (n == 0 || n == 1) {
        printf("Factorial of %d is 1\n", n);
        return 0;
    }

    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= n);

    printf("%d\n", factorial);

    return 0;
}
