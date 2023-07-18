#include <iostream>

using namespace std;

int main() {
  int a(10); // 변수의 선언과 대입을 이렇게 할 수 있다. 이건 c++ 스타일 문법
  int b(a + 5);

  cout << "a : " << a << endl;
  cout << "b : " << b << endl;
}