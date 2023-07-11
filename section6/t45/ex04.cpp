#include <stdio.h>

#define FOR(I, S, E) for(int I = S; I <= E; I++)
#define LOOP while(true)

int main() {
  FOR(i, 0, 10) {
    printf("%d ", i);
  }

  LOOP {
    printf("*"); // 무한으로 별찍기
  }
}