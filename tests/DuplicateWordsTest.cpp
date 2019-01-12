#include <gtest/gtest.h>
#include "../inc/DuplicateWords.hpp"

struct DuplicateWordsTest : public ::testing::Test {
  DuplicateWords DuplicateWordGtest;
};

TEST_F(DuplicateWordsTest, getValueFromRemoveDuplicateWords) {
  std::string result = DuplicateWordGtest.removeDuplicateWords("123");
  ASSERT_STREQ(" ", result.c_str());
}
