#include <cassert>

#include "mycpppkg/calculate.hpp"

namespace mycpppkg
{
  float add(const float a, const float b)
  {
    return a + b;
  }

  float sub(const float a, const float b)
  {
    return a - b;
  }

  float mul(const float a, const float b)
  {
    return a * b;
  }

  float div(const float a, const float b)
  {
    assert(b != 0 && "zero division is not allowed.");
    return a / b;
  }
} // namespace mycpppkg
