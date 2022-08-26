#ifndef TEMPLATE_ENGINE_H
#define TEMPLATE_ENGINE_H

#pragma once

class Engine {

public:
  virtual ~Engine() {}
  virtual void On() = 0;
  virtual void Off() = 0;
  virtual void Forward(int duration)=0;
};

#endif  