#include <stdio.h>
int main(void) {
  int x;
  int *p;

  printf("size x=%ld p=%ld\n", sizeof(x), sizeof(p));
  return 0;
}