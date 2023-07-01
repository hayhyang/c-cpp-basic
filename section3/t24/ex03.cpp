#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    printf("a의 값: %d\n", a);
    *ptr = 20;
    printf("a의 값: %d\n", a);
    // 실무에선 잘 쓰이지 않으나 여러가지 방식으로 재할당이 가능하다는 것을 이해하면 된다.
}