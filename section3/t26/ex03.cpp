#include <stdio.h>

int main() {
  int arr[3] = {1,2,3};
  // 배열 자체를 가리키는 포인터
  // 길이 3인 int형 배열을 가리키는 포인터를 선언
  int(*ptr_arr)[3]; 
  ptr_arr = &arr;
  printf("&arr: %d\n", &arr);
  printf("ptr_arr: %d\n", ptr_arr);
  printf("*ptr_arr: %d\n", (*ptr_arr)[0]);
  for(int i = 0; i < 3; i++) {
    printf("arr[%d]: %d\n", i, (*ptr_arr)[i]);
  }
}