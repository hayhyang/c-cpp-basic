#include <stdio.h>

int main() {
  int arr[] = {1,2,3,4,5};
  int len = sizeof(arr) / sizeof(int); // sizeof : 몇 바이트인지 연산
  for(int i = 0; i < len; i++) {
    printf("%d\n", arr[i]);
  }
}