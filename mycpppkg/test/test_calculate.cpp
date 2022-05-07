#include <vector>

#include <gtest/gtest.h>

#include "mycpppkg/calculate.hpp"

struct CalculatorTestCase
{
  float a;
  float b;
  float answer;
}; // struct CalculatorTestCase

class CalculatorTest : public ::testing::Test
{
protected:
  void SetUp() override
  {
    add_cases_ = {{0.0, 2.0, 2.0}, {1.0, 2.0, 3.0}};
    sub_cases_ = {{0.0, 2.0, -2.0}, {1.0, 2.0, -1.0}};
    mul_cases_ = {{0.0, 2.0, 0.0}, {1.0, 2.0, 2.0}};
    div_cases_ = {{0.0, 2.0, 0.0}, {1.0, 2.0, 0.5}};
  }

  std::vector<CalculatorTestCase> add_cases_;
  std::vector<CalculatorTestCase> sub_cases_;
  std::vector<CalculatorTestCase> mul_cases_;
  std::vector<CalculatorTestCase> div_cases_;
}; // class CalcuratorTest

TEST_F(CalculatorTest, ResultTest)
{
  float result;
  for (const auto &data : add_cases_)
  {
    result = mycpppkg::add(data.a, data.b);
    ASSERT_TRUE(result == data.answer);
  }

  for (const auto &data : sub_cases_)
  {
    result = mycpppkg::sub(data.a, data.b);
    ASSERT_TRUE(result == data.answer);
  }

  for (const auto &data : mul_cases_)
  {
    result = mycpppkg::mul(data.a, data.b);
    ASSERT_TRUE(result == data.answer);
  }

  for (const auto &data : div_cases_)
  {
    result = mycpppkg::div(data.a, data.b);
    ASSERT_TRUE(result == data.answer);
  }
}
