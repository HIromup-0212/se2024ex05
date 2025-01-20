#include <stdio.h>

int f(int a);

int main(void) {
  int i;
  int h[i];
  int o = i;

  scanf("%d", &i);
  for (int d = 0; d < i; d++) {
    for (o; o != 0; o--) {
      h[d] = f(o);
    }
  }
  for (int g = 0; g < i; g++) {
    printf("%d %p\n", g, &h[g]);
  }
  return 0;
}

int f(int a) {
  int v = 10 + a;
  if (a == 0) {
    return 1;
  }
  return a * f(a - 1);
}
