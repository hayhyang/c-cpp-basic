// 생성자: 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자: 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>

using namespace std;

class MyClass {
  public:
    MyClass() { // 생성자
      cout << this << "생성자가 호출되었다" << endl;
    };

    ~MyClass() { // 소멸자
      cout << this << "소멸자가 호출되었다" << endl;
    }
};

MyClass globalObj;

void testLocalObj() {
  cout << "테스트 local obj 시작" << endl;
  cout << "테스트 local obj 끝" << endl;
  MyClass localObj;
}

int main() {
  cout << "main함수 시작" << endl;
  testLocalObj();
  cout << "main함수 끝" << endl;
}