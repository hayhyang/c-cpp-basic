#include <stdio.h>

int main() {
	// // int 32비트(4바이트) 정수를 담는데 쓰임
	// int a = 5;
	// int b = 3;
	// int hap = a + b;
	// int cha = a - b;
	// int gop = a * b;
	// int mok = a / b;
	// int namuji = a % b;

	// printf("%d + %d = %d\n", a , b, hap);
	// printf("%d - %d = %d\n", a , b, cha);
	// printf("%d * %d = %d\n", a , b, gop);
	// printf("%d / %d = %d\n", a , b, mok);
	// printf("%d %% %d = %d\n", a , b, namuji);

	// float 32비트(4바이트) 실수를 담는데 쓰임
	// 부동소수점 floating point, 이진법 음/양-소수점 자리수(10의 제곱근)-정수 의 구조에서 자리수에 따라 소수점의 위치가 변한다.
	float a = 9.8;
	float b = 3.14;
	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	// double 64비트(8바이트) 실수를 담는데 쓰임
	// float의 두배 자리수를 가짐, 더 정확하다고 함
	double hap = a + b;
	double cha = a - b;
	double gop = a * b;
	double mok = a / b;

	printf("%f + %f = %f\n", a , b, hap);
	printf("%f - %f = %f\n", a , b, cha);
	printf("%f * %f = %f\n", a , b, gop);
	printf("%f / %f = %f\n", a , b, mok);
}