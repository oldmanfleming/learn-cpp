#include <iostream>
#include "circle.h"

int main()
{
  Circle c(10);

  std::cout << "Area of circle: " << c.getArea() << std::endl;

  return 0;
}