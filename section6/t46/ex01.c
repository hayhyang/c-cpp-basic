#include <stdio.h>

int main() {
  FILE *in, *out; // 스트림
  int n;

  in = fopen("input.txt", "r");
  // out = fopen("output.txt", "w");
  out = fopen("output.txt", "a");

  fscanf(in, "%d", &n);
  fprintf(out, "%d\n", n);

  fclose(in);
  fclose(out);
}