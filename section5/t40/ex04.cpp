#include <stdio.h>

struct ProductInfo {
  int num;
  char name[100];
  int cost;
};

void swap(ProductInfo *a, ProductInfo *b) {
  ProductInfo tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  ProductInfo product_1 = { 1234, "제주 한라봉", 20000};
  ProductInfo product_2 = { 5678, "성주 꿀참외", 10000};

  swap(&product_1, &product_2);

  printf("1: %s\n", product_1.name);
  printf("2: %s\n", product_2.name);
  
}