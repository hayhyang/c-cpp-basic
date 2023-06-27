// 무한반복
#include <stdio.h>

int main() {
  int i = 1;
  while (true)
  {
    printf("%d", i);
    i++;
    // 조건문이 참(1)이면 무한반복
  }
}