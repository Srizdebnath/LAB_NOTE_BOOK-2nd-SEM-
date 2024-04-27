#include <stdio.h>

int main() {
    int num, i, flag = 0;


    scanf("%d", &num);

    for (i = 2; i <= num / 2; ++i) {
     
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (num == 1) {
        printf("1 is neither prime nor composite\n");
    } else {
        if (flag == 0)
            printf("It is a Prime Number\n");
        else
            printf("It is a Composite Number\n");
    }

    return 0;
}
