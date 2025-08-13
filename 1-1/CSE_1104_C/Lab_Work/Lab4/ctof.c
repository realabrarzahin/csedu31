#include <stdio.h>

int main() {

  float f;
  scanf("%f", &f);

  float c = (5.0f / 9.0f) * (f - 32.0f);
  printf("%0.2f\n", c);

  return 0;
}
