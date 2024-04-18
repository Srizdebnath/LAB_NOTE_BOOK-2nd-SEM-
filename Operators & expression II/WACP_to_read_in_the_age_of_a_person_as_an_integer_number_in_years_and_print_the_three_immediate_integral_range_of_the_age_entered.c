#include <stdio.h>

int main() {
    int age;
    printf("Enter the age.; ");
    scanf("%d", &age);
    printf("%d to %d\n", age - 1, age + 1);
    printf("%d to %d\n", age - 2, age + 2);
    printf("%d to %d\n", age - 3, age + 3);
    return 0;
}
