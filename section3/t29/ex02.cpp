#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;

  int *ptr;

  ptr = &a;
  *ptr = 30;

  ptr = &b;
  *ptr = 10;

  printf("%d\n", a); // 30
  printf("%d\n", b); // 10
  printf("%d\n", *ptr); // 10
  // 종합문제 2. 각각의 printf가 출력하는 값은? 
}