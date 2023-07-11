// typedef struct {int x, y;} 변수명; 여러개의 변수를 묶은 것, 구조체(object?)

#include <stdio.h>

// typedef struct {int x , y;} Point; >> 같은 표현, 전역변수로 사용 가능
struct Point {int x, y;}; // 구조체 선언 자체는 메모리를 차지하지 않는다. 값을 할당하면 메모리 차지함. 들어있는 변수의 크기만큼 구조체의 크기도 정해진다.

int main() {
  
  Point p;
  p.x = 1;
  p.y = 2;
  printf("(%d, %d)\n", p.x, p.y);
  printf("sizeof p: %d", sizeof(Point));
}