// 2. 체중(kg, 실수)과 키(m, 실수)를 입력받아서 체질량 지수를 구하는 프로그램을 만들어 보세요.
// 몸무게를 키의 제곱으로 나눈 값
#include <stdio.h>

int main() {
  float weight;
  float height;

  printf("체중입력(kg): ");
  scanf("%f", &weight);
  printf("키 입력(m): ");
  scanf("%f", &height);

  float bmi = weight / (height * height);
  printf("체질량지수는 %f 입니다.\n", bmi);

}