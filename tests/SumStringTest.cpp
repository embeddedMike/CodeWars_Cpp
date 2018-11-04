#include <gtest/gtest.h>
#include "../inc/sumStrings.hpp"

struct SumStringsTest : public ::testing::Test {
  //SumStrings firstSum;
};

TEST_F(SumStringsTest, checkSum) {
  SumStrings firstSum("123","456");
  std::string result = firstSum.sumValues();
  ASSERT_TRUE("579" == result);
}
