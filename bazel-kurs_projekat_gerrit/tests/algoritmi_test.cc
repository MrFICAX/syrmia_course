#include "gtest/gtest.h"

extern "C" {
#include "src/lib/algoritmi.h"
}

TEST(AlgoritmiTest, Najveci) {
  int niz[]={1, 8, 3};
  int najveci=0;
  najveci=nadji_max(niz,3);
  ASSERT_TRUE(najveci==8);
}

TEST(AlgoritmiTest, Najmanji) {
  int niz[]={1, 8, 3};
  int najmanji=0;
  najmanji=nadji_min(niz,3);
  ASSERT_TRUE(najmanji==1);
}

TEST(AlgoritmiTest, Medijana)
{
  int niz[] = {1, 5, 3, 7};
  int medijana = 0;
  medijana = nadji_medijanu(niz, 3);
  ASSERT_TRUE(medijana == 3);
}
