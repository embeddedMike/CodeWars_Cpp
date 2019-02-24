#include <gtest/gtest.h>
#include "../inc/ScalingSquaredStrings.hpp"

struct ScalingSquaredStringTest : public ::testing::Test {
  ScalingSquaredStrings ScalingSquaredStringsUnitTest;
};

TEST_F(ScalingSquaredStringTest, getResultFromScale) {
  std::string result = ScalingSquaredStringsUnitTest.scale("", 2, 2);
  ASSERT_STREQ(" ", result.c_str());
}
