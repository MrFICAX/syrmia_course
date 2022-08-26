#include "src/lib/matematika.h"

#include "gtest/gtest.h"

TEST(MatematikaTest, ProveriSaberi) {
  Matematika m;
  int rezultat = m.saberi(2, 3);
  int ocekivano = 5;
  EXPECT_EQ(ocekivano, rezultat);
}

TEST(MatematikaTest, DeljenjeNulom) {
  Matematika m;
  int rezultat = m.deli(8, 0);
  int ocekivano = 0;
  EXPECT_EQ(ocekivano, rezultat);
}

TEST(MatematikaTest, ProveriMnozi) {
  Matematika m;
  int rezultat=m.mnozi(2,3);
  int ocekivano = 6;
  EXPECT_EQ(ocekivano, rezultat);
}

TEST(MatematikaTest, ProveriOduzmi) {
  Matematika m;
  int rezultat=m.oduzmi(3,2);
  int ocekivano = 1;
  EXPECT_EQ(ocekivano, rezultat);
}

TEST(MatematikaTest, UporediMnozi) {
  Matematika m;
  int rezultat1=m.mnozi(6,3);
  int rezultat2=m.mnozi(6,2);
  EXPECT_GT(rezultat1, rezultat2);
}

TEST(MatematikaTest, UporediDeli) {
  Matematika m;
  int rezultat1=m.deli(6,3);
  int rezultat2=m.deli(6,2);
  EXPECT_LT(rezultat1, rezultat2);
}

