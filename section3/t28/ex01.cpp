// 배열 포인터: 배열을 가리키는 포인터
// 포인터 배열: 포인터들이 배열

#include <stdio.h>

int main() {
    // int(*ptr)[4]; // int 4개짜리 배열을 가리키는 포인터
    // int *ptr[4]; // 포인터 4개짜리 배열

    // int a = 1;
    // int b = 2;
    // int c = 3;
    // int d = 4;

    // int *ptr[4];

    // ptr[0] = &a; 
    // ptr[1] = &b;
    // ptr[2] = &c;
    // ptr[3] = &d;
    
    // printf("%d %d %d %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3]);

    int arr[4] = {1,2,3,4};
    int *ptr[4];

    for(int i = 0; i < 4; i++) {
        ptr[i] = &arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *ptr[i]);
    }
    printf("\n");
    
}