// 형변환: 자료형을 다른 자료형을 바꾸는 작업
#include <stdio.h>

int main() {
  int math = 90, korean = 95, english = 96;
  int sum = math + korean + english;
  double avg = sum / 3;
  printf("%f\n", avg); // 결과가 93.000000으로 나온다. sum도 정수, 3도 정수니까
  // 실수로 출려하는 방법 1. sum을 double로 선언한다. double sum = math + korean + english;
  //                 2. 수식에서 임시로 형변환을 한다. double avg = (double)sum / 3;
  // 결과값이 93.666667이 된다.
}

// 사칙연산 모두 해당
// 정수 / 정수 = 정수
// 실수 / 정수 = 실수
// 실수 / 실수 = 실수 >> 더 큰 쪽의 형을 선택한다. 실수가 더 많은 수를 담을 수 있으므로 실수형이 됨

