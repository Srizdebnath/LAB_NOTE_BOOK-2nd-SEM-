#include <stdio.h>

int main() {
    int n, count = 0, i = 1;
     scanf("%d", &n);
      for (; count < n; i++) {
        if (i % 7 != 0) {
            printf("%d", i);
            count++;
            if (count < n) {
                printf(" ");
            }
        }
    }

    return 0;
}
