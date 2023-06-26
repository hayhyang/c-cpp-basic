// 논리연산자 (그리고, 또는, ...)
// && 그리고 and
// || 또는 or
// ! -가 아니다 not

#include <stdio.h>
int main() {
  int a;
  scanf("%d", &a);
  bool p = a >= 1 && a <= 10;
  bool q = a == 3 || a == 7;
  bool r = !q;
  printf("p: %d\n", p);
  printf("q: %d\n", q);
  printf("r: %d\n", r);
}