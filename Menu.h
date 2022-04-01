#pragma once
#include <iostream>

#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "RightTriangle.h"
#include "EqTriangle.h"

using namespace std;

class Menu {
  private:
    int menuLength, option;
    string elements[10];
  public:
    Menu(int menuLength, string elements[]) {
      this->menuLength = menuLength;
      for(int i = 0; i < menuLength; i ++) {
        this->elements[i] = elements[i];
      }
    }

    void showMenu() {
      for(int i = 1; i <= menuLength; i ++) {
        cout << i << ": " << elements[i - 1] << endl;
      }
      cout << menuLength + 1 << ": Finish" << endl;
    }

    Shape* selectedOption(int option) {
      switch(option) {
        case 1:
          return new Square();
          break;
        case 2:
          return  new Rectangle();
          break;
        case 3:
          return new RigthtTriangle();
          break;
        case 4:
          return new EqTriangle();
          break;
      }
    }
};