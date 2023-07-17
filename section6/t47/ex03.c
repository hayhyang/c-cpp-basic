// 난수: 랜덤 숫자, 난수를 발생시키는 함수는 stdlib.h 에 들어있다.
// short로 표현가능한 숫자들을 리턴한다.

#include <stdlib.h> // standard library, 표준 라이브러리
#include <stdio.h>
#include <time.h>

int main() {

  // time(NULL); // 1979/01/01 00:00:00로부터 지난 시간을 초단위로 표현
  // printf("%d\n", time(NULL));

  srand(time(NULL)); // 이게 선언된 후부터는 시드에 time값이 들어가 상황별로 다른 난수가 출력된다.
  for(int i = 1; i <=10; i++) {
    // printf("%d\n", rand()); 
    printf("%d\n", rand() % 10 +1); // 1-10으로 범위를 제한하기 위해 나머지에 1을 더한값을 출력
    // 그런데 출력하면 항상 같은값이 출력함. 그래서 seed를 넣어줘야함. 매번 달라야 하므로 주로 현재시간값을 넣음. time.h에 time함수를 사용
  }
}