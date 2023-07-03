// 배열의 주소
#include <stdio.h>

int main() {
  int arr[3] = {1,2,3};
  printf("arr = %d\n", arr);
  printf("arr + 1 = %d\n", arr + 1);
  printf("&arr = %d\n", &arr);
  printf("&arr + 1 = %d\n", &arr + 1); // 배열의 주소에 1을 더하면 배열이 끝난 다음에 1을 더하는 것
}