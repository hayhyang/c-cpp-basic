#include <stdio.h>

struct Point {
  int x, y;

  void swap() {
  // x좌표와 y좌표를 교환
  int tmp = x;
  x = y;
  y = tmp;
}
};



int main() {
  Point pos = {3, 4};
  pos.swap();
  printf("x: %d, y: %d", pos.x, pos.y);
}