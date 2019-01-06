#include <gtest/gtest.h>
#include "../inc/Opstrings.hpp"

struct OpstringsTest : public ::testing::Test {
  Opstrings OpstringsGtest;   
};

TEST_F(OpstringsTest, getValueFromVertMirror)
{
  std::string result = OpstringsGtest.vertMirror("123");
  ASSERT_STREQ(" ",result.c_str());
}
