#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int y;
scanf("%d",&y);
if (y% 400 == 0)
printf("The Year %d is a Leap Year", y);
else if (y% 100 == 0)
printf("It is not a Leap Year", y);
else if (y % 4 == 0)
printf("The Year %d is a Leap Year", y);
else
printf("It is not a Leap Year", y);
return 0;
}