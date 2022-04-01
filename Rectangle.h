#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {
  public:
    Rectangle() {
      cout << "Rectangle created" << endl;
    }
    ~Rectangle() {
      cout << "Rectangle destroyed" << endl;
    }
    
    void draw() {
      for(int i = 0; i < base / 2; i ++) {
        for(int j = 0; j < base; j ++) {
          cout << " * ";
        }
        cout << endl;
      }
    }
};