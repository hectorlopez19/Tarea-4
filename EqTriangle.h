#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class EqTriangle : public Shape {
  public:
    EqTriangle() {
      cout << "Equilateral triangle created" << endl;
    }
    ~EqTriangle() {
      cout << "Equilateral triangle destroyed" << endl;
    }
    void draw() {
      for(int i = 1; i <= base; i ++) {
        for(int j = 0; j < base - i; j ++) {
          cout << " ";
        }
        for(int j = 0; j < i; j ++) {
          cout << " *";
        }
        cout << endl;
      }
    }
};