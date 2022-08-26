#include "src/lib//mock_obrada.h"
#include "src/lib/podaci.h"
#include "src/lib/obrada.h"
#include "gtest/gtest.h"

using ::testing::AtLeast;
using ::testing::InSequence;
using ::testing::AtMost;


// TEST(CarTest, CanStart) {
//   InSequence n;
//   MockVision vision;
//   MockEngine engine;

//   EXPECT_CALL(vision, FindObstacle)
//       .Times(AtLeast(1));
//   EXPECT_CALL(engine, On)
//       .Times(AtMost(1));

//   Car car(&vision, &engine);

//   EXPECT_TRUE(car.Start());
// }


// TEST(CarTest, CanGo) {
//   MockVision vision;
//   MockEngine engine;
//   EXPECT_CALL(vision, FindObstacle)
//       .Times(3);
//   EXPECT_CALL(vision, CountPeople)
//       .Times(3);


//   Car car(&vision, &engine);

//   EXPECT_TRUE(car.Go(3));
// }

TEST(PodaciTest, TestiProcesiraj) {
  // InSequence n;
  // MockVision vision;
  MockObrada obrada;

  int niz1[] = {-1, -2, 3, 4, 5, 6, 7, 8, 9, 10};

  Podaci p( &obrada, niz1);

  // EXPECT_CALL(vision, FindObstacle)
  //     .Times(AtLeast(1));
  EXPECT_CALL(obrada, Procesiraj)
       .Times(AtMost(8));

  // Car car(&vision, &engine);

  EXPECT_TRUE(p.primeni_obradu());
}

TEST(PodaciTest, ProcesirajIIzdvojiParne)
{
  InSequence n;
  // MockVision vision;
  MockObrada obrada;

  int niz1[] = {-1, -2, 3, 4, 5, 6, 7, 8, 9, 10};

  Podaci p(&obrada, niz1);

  // EXPECT_CALL(vision, FindObstacle)
  //     .Times(AtLeast(1));
  EXPECT_CALL(obrada, IzbaciNegativne).Times(AtLeast(1));
  EXPECT_CALL(obrada, IzdvojiParne).Times(AtLeast(1));
  EXPECT_CALL(obrada, Procesiraj).Times(AtLeast(8));

  // Car car(&vision, &engine);

  EXPECT_TRUE(p.filtriraj_niz());
  EXPECT_TRUE(p.primeni_obradu());

}

TEST(PodaciTest, TestSaberiSa100)
{
  // InSequence n;
  // MockVision vision;
  int niz1[] = {-1, -2, 3, 4, 5, 6, 7, 8, 9, 10};

  Podaci p(nullptr, niz1);

  // EXPECT_CALL(vision, FindObstacle)
  //     .Times(AtLeast(1));
  // EXPECT_CALL(obrada, Procesiraj)
  //      .Times(AtMost(8));

  // Car car(&vision, &engine);
  int *noviNiz = p.dodavanje_vrednosti_niza();

  for (int i = 0; i < 10; i++)
  {
    EXPECT_TRUE(noviNiz[i] == (niz1[i] + 100));
  }

}

int main(int argc, char** argv) {
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}