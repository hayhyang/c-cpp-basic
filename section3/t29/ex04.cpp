// 10 * 10 이하의 정수형 이차원 배열을 입력받아 그 배열의 각 행의 요소의 합을 출력하는 프로그램
#include <stdio.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  int arr[n][m];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      scanf("%d", &arr[i][j]);
    }  
  }

  for (int i = 0; i < n; i++){
    int sum = 0;
    for (int j = 0; j < m; j++){
      sum += arr[i][j];
    }  
    printf("%d\n", sum);
  }
}