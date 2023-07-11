#include <stdio.h>

struct Point
{
  int x, y;

  void moveRight() { x++; }
  void moveLeft() { x--; }
  void moveUp() { y++; }
  void moveDown() { y--; }
};


int main() {
  Point p = {2, 5};

  p.moveRight();
  p.moveDown();

  printf("x: %d, y : %d", p.x, p.y);
}