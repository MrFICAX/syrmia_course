#ifndef TEMPLATE_VISION_H
#define TEMPLATE_VISION_H

#pragma once

class Vision {

public:

  virtual ~Vision() {}
  virtual int FindObstacle(int frame) = 0;
  virtual int CountPeople(int frame)=0;
};

#endif  