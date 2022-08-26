#ifndef TEMPLATE_VISION_H
#define TEMPLATE_VISION_H

#pragma once

class Obrada {

public:

  virtual ~Obrada() {}
  virtual void Procesiraj(int value) = 0;
  virtual void IzdvojiParne(int *niz) = 0;
  virtual void IzbaciNegativne(int *niz) = 0;
};

#endif