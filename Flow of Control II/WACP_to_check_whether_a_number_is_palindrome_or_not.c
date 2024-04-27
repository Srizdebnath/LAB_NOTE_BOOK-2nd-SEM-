#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;


    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

  
    if (originalNum == reversedNum)
        printf("It is a Pallindrome\n");
    else
        printf("It is not a Pallindrome\n");

    return 0;
}
