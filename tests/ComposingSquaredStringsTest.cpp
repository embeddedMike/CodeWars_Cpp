#include <gtest/gtest.h>
#include "../inc/ComposingSquaredStrings.hpp"

struct ComposingSquaredStringTest : public ::testing::Test {
  ComposingSquaredStrings ComposingSquaredStringsUnitTest;
};
TEST_F(ComposingSquaredStringTest, getResultFromCompose) {
  std::string result = ComposingSquaredStringsUnitTest.compose(
      "abcd\nefgh\nijkl\nmnop", "qrst\nuvwx\nyz12\n3456");
  ASSERT_STREQ("a3456\nefyz1\nijkuv\nmnopq", result.c_str());
}

TEST_F(ComposingSquaredStringTest, getResultFromVectorOfPartialStrings) {
  std::vector<std::string> result =
      ComposingSquaredStringsUnitTest.vectorOfPartialStrings(
          "abcd\nefgh\nijkl\nmnop");
  ASSERT_STREQ("abcd", result[0].c_str());
}
