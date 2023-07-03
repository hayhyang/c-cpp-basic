#include <stdio.h>

int main() {
  int arr[3] = {1 ,2 ,3};
  int *ptr = arr;
  
  for(int i = 0; i < 3; i++) {
    printf("ptr: %d\n", ptr);
    printf("arr: %d\n", arr);
    printf("*ptr: %d\n", *ptr);
    printf("*(ptr + %d): %d\n", i, *(ptr + i));
    printf("ptr[%d]: %d\n", i, ptr[i]);
    printf("%d[ptr]: %d\n", i, i[ptr]); // 값은 나오지만 쓰면 안되는 표현. 직관적이지 않다.
  }
}