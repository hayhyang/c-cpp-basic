#include <stdio.h>

int sum(int a, int b) {
  return a + b;
}

int main() {
  int c = sum(3, 4);
  printf("%d", c);
}