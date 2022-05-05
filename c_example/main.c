#include <stdio.h>
#include "util.h"

int main() {
  double inc, cm;
  printf("How many inches (inc)? ");

  if (scanf("%lf", &inches)) {
    cm = incToCm(inc);
    printf("%.2lf inc is %2lf cm", inc, cm);
  } else {
    printf("Invalid input.");
  }
  return 0; 
}
