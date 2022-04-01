#pragma once
#include "Shape.h"

class Canvas {
  public:
    void printShape(Shape *s) {
      s->draw();
    }
};