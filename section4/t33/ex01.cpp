// call-by-value: 값에 의한 호출
// call-by-reference : 참조에 의한 호출

#include <stdio.h>

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a;
    int b;
    scanf("%d%d", &a, &b);
    swap(&a, &b); // call-by-reference
    printf("a: %d, b: %d\n", a, b);
}