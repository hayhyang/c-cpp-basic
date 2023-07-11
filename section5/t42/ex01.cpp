// 구조체에 함수 집어넣기. 예전에는 c는 지원안하고 c++만 되는 기능이었음

#include <stdio.h>

struct Time {
  int h, m, s;
  int timeToSec() { // 멤버 함수, 클래스의 메서드와 구별해서 인지하는 것이 좋다. 
    return h * 3600 + m*60 + s; // 멤버 함수 안에서는 멤버 변수를 접근자 없이 호출할 수 있다.
  } // 함수가 구조체와 밀접한 연관이 있기 때문에 묶어주면 좋다.
};

int main() {
  Time t = {1, 22, 48};
  printf("%d", t.timeToSec());
}