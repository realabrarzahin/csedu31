#include <stdio.h>

double my_abs(double x) {
  if (x < 0)
    return -x;
  else
    return x;
}

double my_sqrt(int target) {

  int right = 1 << 8;
  int left = 0;
  int mid;

  while (right - left > 1) {

    mid = (right + left) >> 1;

    if (mid * mid >= target) {
      right = mid;
    }

    else {
      left = mid;
    }
  }

  double assumption = right;

  while (my_abs(assumption * assumption - target) > 0.001) {
    assumption =
        assumption - (assumption * assumption - target) / (2 * assumption);
  }

  return my_abs(assumption);
}

int main() {

  int a, b, c;
  printf("Give the coefficient of x^2, x and constant: ");
  scanf("%d %d %d", &a, &b, &c);

  int disc = b * b - 4 * a * c;

  if (disc > 0) {

    double root1 = (-b + my_sqrt(disc)) / 2 * a;
    double root2 = (-b - my_sqrt(disc)) / 2 * a;

    printf("roots: %0.2lf %0.2lf\n", root1, root2);
  }

  else if (disc < 0) {

    double root1_part1 = -b / (2.0f * a);
    double root1_part2 = my_sqrt(-disc) / (2.0f * a);

    double root2_part1 = -b / (2.0f * a);
    double root2_part2 = my_sqrt(-disc) / (2.0f * a);

    printf("root 1: %0.2lf + %0.2lfi\n", root1_part1, root1_part2);
    printf("root 2: %0.2lf - %0.2lfi\n", root2_part1, root2_part2);
  }

  else {
    double root = -b / (2.0f * a);
    printf("roots: %0.2lf\n", root);
  }
}
