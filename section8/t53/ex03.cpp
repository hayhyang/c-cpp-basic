#include <iostream>

using namespace std;

int n;
void set() {
  n = 10;
}

namespace doodle {
  int n;
  void set() {
    n = 20;
  }

  void doodleSet() {
    n = 22;
  }

  namespace google {
    int n;
    void set() {
      n = 30;
    }
  }
}

int main() {
  using namespace std;
  using namespace doodle;
  using namespace google;

  ::set();
  doodle::set(); // 전역함수와 이름이 같으면 namespace 표시 해줘야 한다
  google::set();

  doodleSet();
}