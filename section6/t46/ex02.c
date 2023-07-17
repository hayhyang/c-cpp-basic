#include <stdio.h>

int main() {
  FILE *in;
  int n;

  in = fopen("intput.txt", "r"); // 존재하지 않는 파일을 불러왔을 때
  
  if(in != NULL) {
    printf("%d\n", in); // 포인터는 NULL(0) 을 가리킨다.
    fscanf(in, "%d", &n);
    fclose(in);  
  } else {
    printf("존재하지 않는 파일입니다.");
  }
  
}