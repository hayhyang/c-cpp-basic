#include <stdio.h>

int main() {
  int a = 10;
  int b = a + 1;
  int *ptr_a = &a;
  int *ptr_b = &b;
  printf("ptr_a의 값: %d\n", ptr_a); 
  printf("ptr_a+1의 값: %d\n", ptr_a + 1); // ptr_a에 4를 더한 값이 나온다. 변수를 저장하는 메모리의 크기가 4바이트이기 때문에 하나를 더하게 되면 변수의 자료형 크기(Byte)만큼 커진다.
  printf("ptr_a의 값: %d\n", b); 
  printf("ptr_b의 값: %d\n", ptr_b); 
}