// 중첩 if 문
// 중괄호 코딩 스타일

#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);

  if(a > b) {
    if (a > c) {
      printf("%d\n", a);
    }
    else {
      printf("%d\n", c);
    }
  }
  else { // b > a
    if(b > c) {
      printf("%d\n", b);
    }
    else { // c > b
      printf("%d\n", c);
    }
  }

  // 위 조건문과 결과는 같다. 그러나 웬만하면 중괄호 사용하는 것이 가독성에 좋음
  if(a > b) {
    if (a > c) printf("%d\n", a);
    else printf("%d\n", c);
  }
  else if(b > c) printf("%d\n", b);
  else printf("%d\n", c);
}