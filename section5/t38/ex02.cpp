#include <stdio.h>

int main() {
  typedef int pair[2];
  pair point = { 3, 4 };
  printf("(%d, %d)\n", point[0], point[1]);
}