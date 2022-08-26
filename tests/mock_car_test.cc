#include "src/lib//mock_vision.h"
#include "src/lib//mock_engine.h"
#include "src/lib/car.h"
#include "src/lib/vision.h"
#include "src/lib/engine.h"
#include "gtest/gtest.h"

using ::testing::AtLeast;
using ::testing::InSequence;
using ::testing::AtMost;


TEST(CarTest, CanStart) {
  InSequence n;
  MockVision vision;
  MockEngine engine;

  EXPECT_CALL(vision, FindObstacle)
      .Times(AtLeast(1));
  EXPECT_CALL(engine, On)
      .Times(AtMost(1));

  Car car(&vision, &engine);

  EXPECT_TRUE(car.Start());
}


TEST(CarTest, CanGo) {
  MockVision vision;
  MockEngine engine;
  EXPECT_CALL(vision, FindObstacle)
      .Times(3);
  EXPECT_CALL(vision, CountPeople)
      .Times(3);


  Car car(&vision, &engine);

  EXPECT_TRUE(car.Go(3));
}

int main(int argc, char** argv) {
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}