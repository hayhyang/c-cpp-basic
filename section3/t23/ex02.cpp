#include <stdio.h>
#include <string.h>

int main() {
    // char str[] = "hello world";
    // int len = strlen(str);
    // printf("문자열의 길이는 %d\n", len); // strlen은 null문자 제외한 문자열의 길이를 리턴한다.

    // char str1[100];
    // strcpy(str1, str);
    // printf("%s %s\n", str1, str);

    // char hello[] = "hello ";
    // char world[] = "world";
    // strcat(hello, world); // 두 문자열을 합침
    // printf("%s", hello);

    char str1[] = "simple";
    char str2[] = "sample";
    int cmp1 = strcmp(str1, str2);
    int cmp2 = strcmp(str2, str1);
    int cmp3 = strcmp(str1, str1);
    printf("%d\n", cmp1);
    printf("%d\n", cmp2);
    printf("%d\n", cmp3); 
    // 첫번째 인자가 두번째 인자보다 앞에 있을 경우 음수 반환
    //                        뒤에 있을 경우 양수 반환
    //         와         가 같을 경우 0 반환
    // string 이라는 자료형이 따로 있어서 이렇게 쓸 일은 거의 없음
 
}