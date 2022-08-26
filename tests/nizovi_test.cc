#include "gtest/gtest.h"

extern "C" {
#include "src/lib/nizovi.h"
}

TEST(NizoviTest, Suma) {
  int niz[]={1, 8, 3};
  int suma = 0;
  suma = suma(niz,3);
  ASSERT_TRUE(suma==12);
}