#include <stdio.h>

struct ProductInfo {
  int num;
  char name[100];
  int cost;
};

void sale(ProductInfo *p, int percent) {
  p->cost -= p->cost * percent /100;
}

int main() { 
  ProductInfo product = { 123, "제주 한라봉", 19000};

  sale(&product, 10); // call by reference 개념을 이용해야한다.

  printf("상품 번호: %d\n", product.num);
  printf("상품 이름: %s\n", product.name);
  printf("가    격: %d\n", product.cost);
} 