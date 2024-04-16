#include <stdio.h>
int main (){
  char A;
  printf("Enter a word");
  scanf("%c", &A);
  printf("ASCII value of %c is %d\n", A, A);
  return 0;
}