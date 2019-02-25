#include <gtest/gtest.h>
#include "../inc/ScalingSquaredStrings.hpp"

struct ScalingSquaredStringTest : public ::testing::Test {
  ScalingSquaredStrings ScalingSquaredStringsUnitTest;
};

TEST_F(ScalingSquaredStringTest, getResultFromScale) {
  std::string result = ScalingSquaredStringsUnitTest.scale("abcd\nefgh", 2, 2);
  ASSERT_STREQ("aabbccdd\naabbccdd\neeffgghh\neeffgghh", result.c_str());
}
