// 1. 시험점수 입력
// 90-100 A
// 80-89 B
// 70-79 C
// 60-69 D
// 50-59 E
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  // if ( n >= 90 && n <= 100) {
  //   printf("A");
  // } else if (n >= 80 && n <= 89) {
  //   printf("B");
  // } else if (n >= 70 && n <= 79) {
  //   printf("C");
  // } else if (n >= 60 && n <= 69) {
  //   printf("D");
  // } else if (n >= 50 && n <= 59) {
  //   printf("E");
  // } else {
  //  printf("등급이 없습니다."); 
  // }

  if(n > 100 || n < 0) {
    printf("잘못 입력하셨습니다.\n");
  } 
  else if(n >= 90) {
    printf("A\n");
  } else if (n >= 80) {
    printf("B\n");
  } else if (n >= 70) {
    printf("C\n");
  } else if (n >= 60) {
    printf("D\n");
  } else if (n >= 50) {
    printf("E\n");
  } else {
    printf("등급이 없습니다.\n");
  }
}
