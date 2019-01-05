#include <gtest/gtest.h>
#include "../inc/PasswordSystem.hpp"

struct PasswordSystemTest : public ::testing::Test {
  PasswordSystem PassSysGtest;
};

TEST_F(PasswordSystemTest, getValueFromHelpZoom) {
  std::string result = PassSysGtest.helpZoom({0,0,0,0,0});
  ASSERT_STREQ("Yes",result.c_str());
}
