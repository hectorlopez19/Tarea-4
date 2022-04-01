#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class RigthtTriangle : public Shape {
  public:
    RigthtTriangle() {
      cout << "Right triangle created" << endl;
    }
    ~RigthtTriangle() {
      cout << "Right triangle destroyed" << endl;
    }
    void draw() {
      for(int i = 0; i < 5; i ++) {
        for(int j = 0; j < i + 1; j ++) {
          cout << " * ";
        }
        cout << endl;
      }
    }
};