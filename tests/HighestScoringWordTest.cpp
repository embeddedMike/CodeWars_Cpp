#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../inc/HighestScoringWord.hpp"

struct HighestScoringWordTest : public ::testing::Test {
  HighestScoringWord HighestScoringWordUnitTest;
};

TEST_F(HighestScoringWordTest, getResultFromHighestScore) {
  std::string result = HighestScoringWordUnitTest.highestScore("asd");
  ASSERT_STREQ("abc", result.c_str());
}
