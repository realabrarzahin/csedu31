#include <stdio.h>

int main() {

  double target;
  scanf("%lf\n", &target);

  double right = 2 << 16;
  double left = 0;
  double mid;

  while (right - left > 0.01) {
    mid = (right + left) / 2.0f;

    if ((mid * mid) >= target) {
      right = mid;
    }

    else {
      left = mid;
    }
  }

  printf("%lf\n", right);

  return 0;
}
