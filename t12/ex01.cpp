#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if(n % 2 == 0) {
    printf("n은 짝수");
  }
  else {
    printf("n은 홀수");
  }

  if(n % 2) {
    printf("n은 홀수");
  }
  else {
    printf("n은 짝수");
  }

  // 결과 같다. c언어에서 이진법활용한 테크닉에서 종종 쓰임
}