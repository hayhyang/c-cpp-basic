#include <stdio.h>

struct ProductInfo {
  int num;
  char name[100];
  int cost;
};

int main() {
  ProductInfo product = { 123, "제주 한라봉", 19000};
  // ProductInfo product { 123, "제주 한라봉", 19000}; 등호없이 정의해도 된다.
  printf("%d\n", product.num);
  printf("%s\n", product.name);
  printf("%d\n", product.cost);

  printf("%d\n", &product);
  printf("%d\n", &product.num);
  printf("%d\n", product.name);
  printf("%d\n", &product.cost);
  // 구조체의 크기는 구조체를 구성하는 변수들의 크기를 더한 것과 같다.
}