#include <stdio.h>

int f(int mid) { return mid * mid; }

double my_abs(double x) {
  if (x < 0)
    return -x;
  else
    return x;
}

double f_sq(double x, double y) {
  if (my_abs(x * x - y) < 0.01)
    return 0;
  else
    return 1;
}

int main() {

  int left = 0;
  int right = 1 << 16;
  int mid;

  int y;
  scanf("%d", &y);

  while (right - left > 1) {

    mid = (right + left) >> 1;

    if (f(mid) >= y)
      right = mid;
    else
      left = mid;
  }

  double xi = right;
  double target = y;

  while (f_sq(xi, y)) {
    xi = xi - (xi * xi - y) / (xi * 2);
  }

  printf("%0.2lf", my_abs(xi));
}
