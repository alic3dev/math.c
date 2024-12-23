#include "test_sqrt.h"

#include <assert.h>

#include "sqrt.h"

void test_sqrt() {
  assert(sqrt(9) == 3);
  assert(sqrt(4) == 2);
  assert(sqrt(529) == 23);
  
  // TODO: Precision error here, handle this properly.
  // assert(sqrt(30) == 5.477226);
}

