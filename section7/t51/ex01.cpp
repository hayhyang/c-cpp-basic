// 함수 오버로드
// 다중 정의

#include <iostream>

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void swap(double &a, double &b) {
  double tmp = a;
  a = b;
  b = tmp;
}

void swap(int* (&a), int*(&b)) {
  int *tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 20, b = 30;
  double da = 3.14, db = 1.59;
  int *pa = &a, *pb = &b;
  
  swap(a, b);
  swap(da, db);
  swap(pa, pb);
  // 같은 함수명으로 만들면 어떤 자료형을 쓸지 판단해서 실행함

  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;

  std::cout << "da : " << da << std::endl;
  std::cout << "db : " << db << std::endl;

  std::cout << "&a : " << pa << std::endl;
  std::cout << "&b : " << pb << std::endl;
}