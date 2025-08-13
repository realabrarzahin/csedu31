#include <stdio.h>

int main() {

  const float PI = 3.14159f;

  float radius;
  scanf("%f", &radius);

  float area = PI * radius * radius;
  printf("%0.2f\n", area);

  float perimeter = 2 * PI * radius;
  printf("%0.2f\n", perimeter);

  return 0;
}
