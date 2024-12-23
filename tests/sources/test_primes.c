#include "test_primes.h"

#include <assert.h>

#include "primes.h"

void test_primes() {
  assert(isPrime(3) == 1);
  assert(isPrime(2) == 0);
  assert(isPrime(9) == 0);
  assert(isPrime(7) == 1);
}

