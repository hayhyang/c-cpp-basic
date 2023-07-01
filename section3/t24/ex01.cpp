// 포인터: 변수 가리키기, 변수의 주소를 저장하는 변수

#include <stdio.h>

int main() {
    int a = 20;
    int *ptr_a;
    ptr_a = &a; // & >> 주소값을 가리킴. 변수 a의 주소값을 할당한다.
    printf("%d\n", ptr_a); // 실행 할때마다 출력값이 달라진다. 실행시킬때마다 a변수의 위치가 램의 상황에 따라 달라지기 때문

    printf("a의 값: %d\n", a);
    printf("a의 주소값: %d\n", &a);
    printf("ptr_a에 저장된 값: %d\n", ptr_a);
    printf("ptr_a가 가리키는 변수의 값: %d\n", *ptr_a);
}