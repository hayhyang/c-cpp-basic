// 범위(배열) 기간 for문

#include <iostream>

using namespace std;

int main() {
  int arr[10] = {3,1,4, 1, 5, 9, 2, 6, 5, 3};
  // for(int i = 0 ; i < 10 ; i++) {
  //   cout << arr[i] << endl;
  // }

  for(int &n : arr) { // arr의 각 요소를 변수 n으로 사용한다는 의미
    cout << n << ' ';
    n = arr[6];
  } 

  cout << endl;

  for(int n : arr) {
    cout << n << ' ';
  }


}