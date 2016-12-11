#include "UnitTest++/UnitTest++.h"

TEST(Sanity) {
  CHECK_EQUAL(1, 1);
}

int main() {
  return UnitTest::RunAllTests();
}
