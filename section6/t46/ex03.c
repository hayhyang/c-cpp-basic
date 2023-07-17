#include <stdio.h>

int main() {
  FILE *in = fopen("ex03.c", "r");
  char ch;
  // while (!feof(in)) { // feof end of file. file의 끝에 도달했을 때 true를 반환하는 함수
  //   fscanf(in, "%c", &ch);
  //   printf("%c", ch);
  // }

  while (fscanf(in, "%c", &ch) != EOF) {
    printf("%c", ch);
  }

  fclose(in);
}