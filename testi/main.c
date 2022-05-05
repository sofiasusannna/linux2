#include <stdio.h>
#include "util.h"

int main() {
  double kg, lbs;
  printf("How many pounds (lbs)?");
  if (scanf("%lf", &lbs)) {
    kg = lbsToKg(lbs);
    printf("%.2lf lbs is %.2lf kg\n",lbs, kg);
  } else {
    printf("Invalid input. Please input valid floating point numbers.\n");
  }
  return 0;
}
