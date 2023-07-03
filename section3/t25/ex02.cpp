#include <stdio.h>

int main() {
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  // printf("arr의 값: %d\n", arr); // &arr[0] 과 같다.
  // for (int i = 0; i < 10; i++) {
  //   printf("arr 요소의 주소값을 불러오는 다양한 표현들");
  //   printf("&arr[%d]: %d\n", i, &arr[i]);
  //   printf("arr + %d: %d\n", i, arr + i);
  //   printf("%d\n", *(arr + i));
  // }

  for(int *ptr = arr; ptr < arr + 10; ptr++) {
    printf("arr의 요소는: %d\n", *ptr);  
  }
 }