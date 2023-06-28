// 3 6 9 게임, 입력받은 숫자까지만 실행
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    if(i % 3 == 0) {
      printf("👏\n");
    } else {
      printf("%d\n", i);
    }
    
  }
}