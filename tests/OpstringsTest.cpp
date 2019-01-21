#include <gtest/gtest.h>
#include "../inc/Opstrings.hpp"

struct OpstringsTest : public ::testing::Test {
  Opstrings OpstringsGtest;
};

TEST_F(OpstringsTest, getValueFromVertMirror) {
  std::string result = OpstringsGtest.vertMirror("abcd\nefgh\nijkl\nmnop");
  ASSERT_STREQ("dcba\nhgfe\nlkji\nponm", result.c_str());
}

TEST_F(OpstringsTest, getValueFromOperPassVertMirror) {
  std::string result =
      OpstringsGtest.oper(OpstringsGtest.vertMirror, "abcd\nefgh\nijkl\nmnop");
  ASSERT_STREQ("dcba\nhgfe\nlkji\nponm", result.c_str());
}

TEST_F(OpstringsTest, getValueFromHorMirror) {
  std::string result = OpstringsGtest.horMirror("abcd\nefgh\nijkl\nmnop");
  ASSERT_STREQ("mnop\nijkl\nefgh\nabcd", result.c_str());
}

TEST_F(OpstringsTest, getValueFromOperPassHorMirror) {
  std::string result =
      OpstringsGtest.oper(OpstringsGtest.horMirror, "abcd\nefgh\nijkl\nmnop");
  ASSERT_STREQ("mnop\nijkl\nefgh\nabcd", result.c_str());
}
