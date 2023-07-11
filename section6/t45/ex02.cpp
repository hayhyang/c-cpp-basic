// 매개변수가 있는 매크로
// 중요)매개변수에도 괄호, 수식을 감싸는 부분도 괄호를 쳐줘야 함. 
#include <stdio.h>
#define SQUARE(X) X*X

int square(int a) {
  return a * a;
}

int main() {
  int a;
  scanf("%d", &a);
  printf("%d\n", square(a));
  printf("%d\n", SQUARE(a));
  printf("%d\n", 100 / SQUARE(a)); // SQUARE 먼저 계산되는게 아니라 수식이 다 풀어져서 100 / a * a 로 계산됨
  // 함수 안의 계산을 묶고 싶다면 
  printf("%d\n", 100 / (SQUARE(a)));
  printf("%d\n", 100 / SQUARE(a)); // #define SQUARE(X) (X*X) 이렇게 수식을 묶어주면 된다.

  printf("%d\n", SQUARE(a-1)); // -1이 출력된다. 수식을 풀면 (a-1*a-1)이 됨. 각 변수를 묶어줘야 원하는 결과를 얻는다.
  printf("%d\n", SQUARE(((a)-(1)))); // 혹은 #define SQUARE(X) ((X)*(X)) 중요하므로 잊으면 안됨
}