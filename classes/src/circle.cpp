#include "circle.h"
#include <iostream>

Circle::Circle(double r) : radius(r)
{
  std::cout << "Circle created with radius " << radius << std::endl;
}

double Circle::getArea() const
{
  return 3.14159 * radius * radius;
}