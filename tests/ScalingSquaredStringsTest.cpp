#include <gtest/gtest.h>
#include "../inc/ScalingSquaredStrings.hpp"

struct ScalingSquaredStringTest : public ::testing::Test {
  ScalingSquaredStrings ScalingSquaredStringsUnitTest;
};
TEST_F(ScalingSquaredStringTest, getResultFromHorizontalScale) {
  std::string result =
      ScalingSquaredStringsUnitTest.horizontalScale("abcd\nefgh", 2);
  ASSERT_STREQ("aabbccdd\neeffgghh", result.c_str());
}
TEST_F(ScalingSquaredStringTest, getResultFromVerticalScale) {
  std::string result =
      ScalingSquaredStringsUnitTest.verticalScale("abcd\nefgh", 2);
  ASSERT_STREQ("abcd\nabcd\nefgh\nefgh", result.c_str());
}
TEST_F(ScalingSquaredStringTest, getResultFromFinalScale) {
  std::string result =
      ScalingSquaredStringsUnitTest.finalScale("abcd\nefgh", 2, 2);
  ASSERT_STREQ("aabbccdd\naabbccdd\neeffgghh\neeffgghh", result.c_str());
}
