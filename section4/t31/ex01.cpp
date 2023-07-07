#include <stdio.h>

int money = 10000;

void buyItem(int cost, int cnt) {
  
  money -= cost * cnt;
  printf("아이템을 구매했습니다.\n");
  printf("  아이템 개수: %d\n", cnt);
  printf("  잔액: %d\n", money);
}

int main() {
  buyItem(200, 5);
  buyItem(100, 7);
}