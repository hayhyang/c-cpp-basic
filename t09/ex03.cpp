// 3. 알파벳을 입력받아서 다음 알파벳을 출력하는 프로그램을 만드세요.(Z제외)
#include <stdio.h>

int main() {
  char alpha;
  scanf("%c", &alpha);
  char nextAlpha =  alpha + 1;
  printf("%c", nextAlpha);
}