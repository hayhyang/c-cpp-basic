// do-while 조건을 만족하지 않더라도 최초 1회는 무조건 실행
 #include <stdio.h>

 int main() {
  int i;
  scanf("%d", &i);
  do {
    printf("%d\n", i);
    i++;
  } while(i < 10);
 }