#include <stdio.h>

int noMeaning() {
  printf("first\n");
  return 1; // 리턴이 한번 실행되고 나면 즉시 종료되기 때문에 이후에 
  printf("second\n");
  return 2;
}

int main() {
  int a;
  a = noMeaning();
  printf("%d", a);
}