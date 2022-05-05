/* util.c */
#include "util.h"

const double INC_IN_CM = 2.54;

double incToCm (double inc) {
  return inc/INC_IN_CM;
}

double cmToInc (double cm) {
  return cm*INC_IN_CM;
}
