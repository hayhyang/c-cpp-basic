#include <stdio.h>

int main() {
  int i = 1;
  for(; ; ) { // 제어문은 필요에 따라 생략가능하다. 조건식이 비어있을 경우 true로 인식
    printf("생략가능");
    i++;
  }
}