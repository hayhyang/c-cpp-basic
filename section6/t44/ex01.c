// 상수: 변하지 않는 수 const
// 변수: 변할 수 있는 수 매크로, enum

#include <stdio.h>
#define PI 3.14159 // 이렇게 선언하면 메모리에 저장하지 않고 상수로 다룬다. 포인터도 동작하지 않음
                  // 이렇게 선언하는 것을 매크로라고 부른다.

int main() {
  // float PI = 3.14159;

  float a = PI;
  // float b = PI *= 2; 이 식은 연산되지 않는다. 상수로 선언되었기 때문에 PI값 자체를 바꿀 수 없다.
  printf("%.2f\n", PI);
}

