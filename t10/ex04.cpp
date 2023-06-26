#include <stdio.h>

int main() {
  // 전치와 후치
  int a = 10;
  int b;
  // printf("---전치 증가 연산---\n");
  // b = ++a; // 전치, a에 1을 증가시키고 b에 대입
  // printf("a: %d\n", a); 
  // printf("b: %d\n", b);

  printf("---후치 증가 연산---\n");
  b = a++; // 후치, b에 a를 대입한 후 1을 증가시킴. 별로 권장하는 방법은 아님. 직관적 표현을 위해 b = a; a++;을 권장
  printf("a: %d\n", a); // 11
  printf("b: %d\n", b); // 10
}