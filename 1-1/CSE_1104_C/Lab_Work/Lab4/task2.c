#include <stdio.h>

int main() {

  int a, b;
  scanf("%d %d", &a, &b);

  printf("A + B: %d\n", a + b);
  printf("A - B: %d\n", a - b);
  printf("A / B: %d\n", a / b);
  printf("A x B: %d\n", a * b);
  printf("A mod B: %d\n", a % b);

  printf("A AND B: %d\n", a & b);
  printf("A OR B: %d\n", a | b);
  printf("A XOR B: %d\n", a ^ b);

  printf("One's Complement of A: %d\n", ~a);
  printf("One's Complement of B: %d\n", ~b);

  printf("Right Shift by Two of A: %d\n", a >> 2);
  printf("Right Shift by Two of B: %d\n", b >> 2);

  printf("Left Shift by Two of A: %d\n", a << 2);
  printf("Left Shift by Two of B: %d\n", b << 2);

  return 0;
}
