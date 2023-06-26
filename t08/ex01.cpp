// char: 1바이트 정수형(int: 4바이트)
// character: 문자(반각문자, 알파벳, 숫자, 문장부호) / 한글, 한자, 일본어, 등등은 정각문자. 정각문자의 절반크기 반각문자
#include <stdio.h>

int main() {
  char a;
  printf("문자 입력: ");
  scanf("%c", &a);
  printf("%c의 ASCII 값: %d\n", a, a);

  int b;
  printf("숫자 입력: ");
  scanf("%d", &b);
  printf("%d의 ASCII 값: %c\n", b, b);
}

// ASCII American Standard, 문자-숫자 대응시키는 표준