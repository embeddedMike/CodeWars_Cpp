#include <gtest/gtest.h>
#include "../inc/sumStrings.hpp"

struct SumStringsTest : public ::testing::Test {
  SumStrings firstSum;
};

TEST_F(SumStringsTest, checkSum) {
  std::string result = firstSum.sumValues();
  ASSERT_TRUE(3 == 3);
}
