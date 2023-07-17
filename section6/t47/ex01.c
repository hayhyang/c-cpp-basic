// getchar, putchar 문자 입출력 함수 
// gets, puts 문자열 입출력 함수 >> TODO: 이거 왜 안됨? 나중에 찾아보기

#include <stdio.h>

int main() {
  char ch;
  ch = getchar(); // scanf? 문자를 입력받아서
  putchar(ch); // 출력한다.

  char str[100];
  gets_s(str);
  puts(str);
}