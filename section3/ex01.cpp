#include <stdio.h>

int main() {
  int a[5]; // int 배열의 이름[배열의 크기, 생략 가능]

  for (int i = 0; i < 5; i ++) {
    a[i] = i * 5;
  }

  for (int i = 0; i < 5; i ++) {
    printf("%d\n", a[i]);
  }

}