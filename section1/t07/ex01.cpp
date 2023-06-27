#include <stdio.h>

int main() {
  int a, b;
  scanf("%d%d", &a, &b); // & 포인터

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	
	printf("%d + %d = %d\n", a , b, hap);
	printf("%d - %d = %d\n", a , b, cha);
	printf("%d * %d = %d\n", a , b, gop);
	printf("%d / %d = %d\n", a , b, mok);
}

// scanf : 한 줄에 입력된 구분된 숫자값을 가져와서 하나씩 할당. 띄어쓰기 엔터 상관없음. ; 안에 있는 값 가져옴