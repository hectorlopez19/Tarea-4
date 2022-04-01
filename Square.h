#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Square : public Shape {
  public: 
    Square() {
      cout << "Square created" << endl;
    }
    ~Square() {
      cout << "Square destroyed" << endl;
    }
    void draw() {
      for(int i = 0; i < base; i ++) {
        cout << " * ";
        for(int j = 0; j < base - 2; j ++) {
          if(i == 0 || i == base - 1) {
            cout << " * ";
          }
          else {
            cout << "   ";
          }
        }
        cout << " * " << endl;
      }
    }
};