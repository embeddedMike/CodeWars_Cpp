#include <gtest/gtest.h>
#include "../inc/DuplicateWords.hpp"

struct DuplicateWordsTest : public ::testing::Test {
  DuplicateWords DuplicateWordGtest;
};

TEST_F(DuplicateWordsTest, getValueFromRemoveDuplicateWords) {
  std::string result = DuplicateWordGtest.removeDuplicateWords(
      "123 abc abc asia asia tola asia");
  ASSERT_STREQ("123 abc asia tola", result.c_str());
}
