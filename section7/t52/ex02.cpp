// 범위기반 For문을 사용하여 이차원 배열을 출력해 보세요.

#include <iostream>

using namespace std;

int main() {
  int arr[2][3] = {{1,2,3},{4,5,6}};

  // for(int i = 0; i < 2; i++) {
  //   for(int j = 0; j < 3; j++) {
  //     cout << arr[i][j];
  //   }  
  //   cout << endl;
  // }

  for(int (&i)[3] : arr) {
    for(int &j : i) {
      cout << j;
    }  
    cout << endl;
  }
}