#include <iostream>

#include "Menu.h"
#include "Shape.h"
#include "Canvas.h"

using namespace std;

int main() {
  bool finished = false;
  int option = 0;
  Canvas canvas;
  Shape *shape = nullptr;

  string elements[4] = {"Square", "Rectangle", "Right triangle", "Equilateral triangle"};
  Menu mainMenu(4, elements);

  while(true) {
    mainMenu.showMenu();
    cin >> option;

    if(option == 5) {
      break;
    }
    else if(option < 1 || option > 5) {
      cout << "Invalid option" << endl << endl;
    }
    else {
      shape = mainMenu.selectedOption(option);
      canvas.printShape(shape);
      delete shape;
    }
  }

}
