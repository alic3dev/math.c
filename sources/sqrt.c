
#include "sqrt.h"

double sqrt(double number) {
  unsigned short int precision = 0;
  unsigned short int precisionMax = 1000;

  double intermediary = number / 2;
  double previousIntermediary = number;

  do {
    double intermediarySquared = intermediary * intermediary;

    if (intermediarySquared == number) {
      return intermediarySquared;
    } else if (intermediarySquared > number) {
      intermediary = (intermediary + number) / 2.0;
    } else {
      intermediary = (intermediary - number) / 2.0;
    }

    precision++;
  } while (precision < precisionMax);

  return intermediary;
}

