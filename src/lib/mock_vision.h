#pragma once

#include "vision.h"
#include "gmock/gmock.h"  // Brings in Google Mock

class MockVision : public Vision {
 public:
  MOCK_METHOD1(FindObstacle, int(int frame));
  MOCK_METHOD1(CountPeople, int(int frame));

};