// 정수 하나를 매개변수로 받아 그 수가 짝수이면 0, 홀수이면 1을 반환하는 함수를 작성해보세요

#include <stdio.h>

int parity(int n) {
  int result;
  if(n % 2 == 0) result = 0;
  else result = 1; 
  return result;
}

int main() {
  printf("%d\n", parity(5));
  printf("%d\n", parity(-3));
  printf("%d\n", parity(6));
}