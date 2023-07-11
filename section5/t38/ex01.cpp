// 구조체 typedef type define 구조(타입, 형)정의

#include <stdio.h>

int main() {
  typedef int int32;
  int32 n = 20;
  printf("%d\n", sizeof(int32));
}