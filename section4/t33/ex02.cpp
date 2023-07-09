// prototype 원형, 시제품. 함수가 어떻게 생겼는지 간단하게 알려주는 것

#include <stdio.h>

// 아래처럼 어떤 함수가 있는지 미리 정의해두는 것. 실행 전에 구현코드가 작성되어 있지 않아도 된다.
void walk(int);
void rotate(int);
void drawSquare(int, int);

int main() {
    drawSquare(10, 90);
}

void walk(int distance) {
    printf("%dcm를 걸었습니다.\n", distance);
}

void rotate(int angle) {
    printf("%d도 회전했습니다.\n", angle);
}

void drawSquare(int distance, int angle) {
    for(int i = 0; i < 4; i++) {
        walk(distance);
        rotate(angle);
    }
}
