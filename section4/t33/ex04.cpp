// 팩토리얼
// n! = n * (n-1)!

#include <stdio.h>

int facorial(int n) {
    if(n == 1) return 1;
    return n * facorial(n - 1);
}

int main() {
    printf("%d",facorial(5));
}