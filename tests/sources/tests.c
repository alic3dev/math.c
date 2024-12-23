#include "tests.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "primes.h"
#include "sqrt.h"

#include "print_pass.h"
#include "test_primes.h"
#include "test_sqrt.h"

int main() {
  test_sqrt();
  print_pass("sqrt");

  test_primes();
  print_pass("primes");

  unsigned int *previousPrimes;
  previousPrimes = malloc(sizeof(unsigned int) * 10000);

  free(previousPrimes);

  return 0;
}

