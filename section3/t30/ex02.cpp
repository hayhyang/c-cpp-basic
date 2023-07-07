#include <stdio.h>

int main() {
  int arr[3][3] = {0};

  printf("%d\n", &arr[0][0]); // 100
  printf("%d\n", arr[0] + 1); // 100 + 4
  printf("%d\n", &arr[0] + 1); // 100 + 12
  printf("%d\n", arr + 1); // 100 + 12
  printf("%d\n", &arr + 1); // 100 + 36
}