#include "primes.h"

#include <stdlib.h>

unsigned char isPrime(unsigned int number) {
  if (number % 2 == 0) {
    return 0;
  }

  for (unsigned int i = 3; i < number / 2; i += 2) {
    if (number % i == 0) {
      return 0;
    }
  }

  return 1;
}

/**
  * generatePrime()
  * @description Assumes that rand has been seeded.
  */
unsigned int generatePrime() {
  do {
    int randomValue = rand();

    if (isPrime(randomValue) == 1) {
      return randomValue;
    }
  } while (1);
}

