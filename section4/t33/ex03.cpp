// 재귀함수: 자기 자신의 정의속에 또 다시 자기 자신이 포함되어 있는 것
// recursion, rec

#include <stdio.h>

void rec(int n) {
    if(n > 13) return;
    printf("n = %d\n", n);   
    rec(n + 1);
    
}

int main() {
    rec(1);
}