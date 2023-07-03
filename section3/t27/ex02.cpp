/*
  1. arr = &arr[0]
  2. *arr == arr[0]
  3. arr + 1 == arr에 sizeof(*arr)을 더한 값
  (arr를 ptr로 대체해도 같다. 배열 이름 자체가 포인터이기 때문?)
*/

#include <stdio.h>

int main() {
  int arr[2][3] = { {1,2,3}, {4,5,6}};

  int (*ptr)[3] = arr; // = &arr[0]

  // 1. ptr[i] == arr[i]
  // 2. ptr[i][j] == arr[i][j]
  // ptr = arr
  // 2차원 배열의 한 행을 가리키는 포인터를 만들면, 그 포인터는 arr와 같다?
  
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }
}