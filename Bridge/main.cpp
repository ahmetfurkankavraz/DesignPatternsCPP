#include "Shape/Circle.hpp"
#include "Shape/Rectangle.hpp"
#include "Drawer/FirstDrawer.hpp"
#include "Drawer/SecondDrawer.hpp"

int main(){

  Shape* circle1 = new Circle(new FirstDrawer(), 10, 10, 10);
  Shape* circle2 = new Circle(new SecondDrawer(), 10, 10, 10);
  Shape* rectangle1 = new Rectangle(new FirstDrawer(), 10, 10, 10, 10);
  Shape* rectangle2 = new Rectangle(new SecondDrawer(), 10, 10, 10, 10);

  circle1->draw();
  circle2->draw();
  rectangle1->draw();
  rectangle2->draw();

  return 0;
}