// 비교연산자(크기 비교), 논리연산자
#include <stdio.h>

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  int p = a > b;
  int q = a < b;
  int r = a == b; // == 같다
  // 2 > 3 거짓
  // 참: 1 거짓: 0
  printf("p: %d\n", p);
  printf("q: %d\n", q);
  printf("r: %d\n", r);
  // bool : 진리값 저장용 변수 (1바이트) 
  bool s = a > b;
  bool t = a < b;
  bool u = a == b;
  printf("s: %d\n", s);
  printf("t: %d\n", t);
  printf("u: %d\n", u);
  // a >= b: a는 b보다 크다
}