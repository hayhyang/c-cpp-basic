#include <stdio.h>

int main() {
  printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
  
  int a; char b; float c; double d;
  printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
}

// sizeof(x): x의 크기를 알려준다.
// x: 형 (int, float, char...), 변수이름