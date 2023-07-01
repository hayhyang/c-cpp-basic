// 문자열 : 문자들이 열거

#include <stdio.h>

int main() {
    char arr[] = "Hello world";
    printf("%s\n", arr);
    printf("배열의 크기: %d\n",sizeof(arr) / sizeof(char)); // 13이 아닌 14가 나온다. 
    //char arr[] = "abc" = {'a', 'b', 'c', '\0'(NULL문자)}과 같다. 마지막에 널문자가 붙어서 크기가 1크게 나온다. 기본으로 붙어있음
    // null문자 빼고 싶으면 -1

    char s[100];
    printf("이름을 입력하세요");
    scanf("%s", s);
    printf("안녕하세요. %s", s);
}