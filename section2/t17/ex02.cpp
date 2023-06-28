#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  // int i = 0, t = 1;
  // while (i <= n)
  // {
  //   printf("2^%d = %d\n", i, t);
  //   i++;
  //   t *= 2;
  // }

  for(int i = 0, t = 1; i <= n; i++, t *= 2) { // 여러개의 변수를 선언하고 연산할 수 있다.
    printf("2^%d = %d\n", i, t);
  }
  
}