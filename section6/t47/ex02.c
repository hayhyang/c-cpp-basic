// sscanf, sprintf 문자열 자체를 입출력

#include <stdio.h>

int main() {
  // char str[] = "450";
  // int n;
  // sscanf(str, "%d", &n);
  // printf("n의 값: %d\n", n);

  int n = 450;
  char str[100];

  sprintf(str, "%d", n);
  printf("%s\n", str);
}