// break, continue, 중첩 for문
// break: 반복문 한개를 빠져나옴

#include <stdio.h>

int main() {
  for(int i = 1; ; i++) {
    int k;
    scanf("%d", &k);
    if(k == 0) break;
    printf("%d번째: %d\n", i, k);
  }
}