#include <iostream>

#include "mycpppkg/calculate.hpp"

int main()
{
  float a = 4.0;
  float b = 2.0;

  float ret;
  ret = mycpppkg::add(a, b);
  std::cout << "add = " << ret << std::endl;
  ret = mycpppkg::sub(a, b);
  std::cout << "sub = " << ret << std::endl;
  ret = mycpppkg::mul(a, b);
  std::cout << "mul = " << ret << std::endl;
  ret = mycpppkg::div(a, b);
  std::cout << "div = " << ret << std::endl;
}
