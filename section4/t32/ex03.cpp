#include <stdio.h>

int money = 2000;

int buyItem(int cost, int cnt) {
  if(money < cost) {
    printf("잔액이 부족합니다.\n");
    return -1;
  } 
  money -= cost * cnt;
  printf("아이템을 구매했습니다.\n");
  printf("  아이템 개수: %d\n", cnt);
  printf("  잔액: %d\n", money);
  return 0;
}

int main() {
  int result;
  result = buyItem(3000, 5);
  if(result == -1) {
    printf("잔액이 부족하시군요...\n");
  }
  else {
    printf("물건을 구매했습니다.\n");
  }
  buyItem(50, 7);
}