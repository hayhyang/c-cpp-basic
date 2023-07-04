// 종합문제 1. 100개 이하의 정수를 입력받아 첫 줄에 짝수번째 숫자를 순서대로 출력하고 다음줄에 홀수번째 숫자를 출력하는 프로그램을 만들어보세요.
#include <stdio.h>

int main() {
  int n;
  int arr[100];

  // 배열의 갯수 n 입력
  scanf("%d", &n);
  // 배열에 n개의 요소 입력
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // 
  for (int i = 1; i < n; i += 2){
    printf("%d ", arr[i]);
  }
  printf("\n");
  for (int i = 0; i < n; i += 2){
    printf("%d ", arr[i]);
  }
  printf("\n");
}