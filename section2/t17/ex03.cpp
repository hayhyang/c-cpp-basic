#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int i, sum;
  for(i = 1, sum = 0; i <= n; sum += i, i++);
  printf("1부터 %d까지의 합은 %d입니다.", n, sum);
}