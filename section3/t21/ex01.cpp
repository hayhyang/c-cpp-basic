// 입력받은 숫자들을 거꾸로 출력
// 최대, 최소값 구하기
// 짝수의 개수

#include <stdio.h>

int main() {
  int n;
  int arr[1000];

  printf("입력할 숫자의 개수 입력 : ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for(int i = 1; i <= n; i++) {
    printf("%d ", arr[n-i]);
  }
}