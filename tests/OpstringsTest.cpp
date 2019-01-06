#include <gtest/gtest.h>
#include "../inc/Opstrings.hpp"

struct OpstringsTest : public ::testing::Test {
  Opstrings OpstringsGtest;   
};

TEST_F(OpstringsTest, getValueFromVertMirror)
{
  std::string result = OpstringsGtest.vertMirror("abcd\nefgh\nijkl\nmnop");
  ASSERT_STREQ("dcba\nhgfe\nlkji\nponm",result.c_str());
}
