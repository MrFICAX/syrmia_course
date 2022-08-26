#pragma once

#include "engine.h"
#include "gmock/gmock.h"  // Brings in Google Mock

class MockEngine : public Engine {
 public:
  MOCK_METHOD0(On, void());
  MOCK_METHOD0(Off, void());
  MOCK_METHOD1(Forward, void(int duration));

};