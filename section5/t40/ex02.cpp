#include <stdio.h>

struct ProductInfo {
  int num;
  char name[100];
  int cost;
};


int main() {
  ProductInfo product { 123, "제주 한라봉", 19000};
  ProductInfo *ptr_product = &product;
  printf("%d\n", ptr_product);

  printf("상품 번호: %d\n", (*ptr_product).num); // *ptr_product.num 로 선언하면 *(ptr_product.num)로 인식해서 에러남. num은 포인터가 아니니까
  printf("상품 이름: %s\n", (*ptr_product).name); // (*ptr_product) = product니까 product.num이 됨
  printf("가    격: %d\n", (*ptr_product).cost);

  // (*a).b 은 a->b와 같은 표현이다.
  printf("상품 번호: %d\n", ptr_product->num);
  printf("상품 이름: %s\n", ptr_product->name);
  printf("가    격: %d\n", ptr_product->cost);

}