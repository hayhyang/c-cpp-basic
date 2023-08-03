#include <iostream>

using namespace std;

int n;
void set() {
  ::n = 10;
}

namespace doodle {
  int n;
  void set() {
    n = 20;
  }
}

namespace google {
  int n;
  void set() {
    ::n = 30; // ::n을 하면 전역변수를 참조한다는 의미가 됨. google의 n이 아닌 전역변수 n의 값이 변경된다.
    doodle::n = 1; // doodle의 n 값을 변경함
  }
}

int main() {
  ::set();
  doodle::set();
  google::set();

  cout << "n=" << n << endl;
  cout << "::n=" << ::n << endl;
  cout << "doodle::n=" << doodle::n << endl;
  cout << "google::n=" << google::n << endl;
}