#include <gtest/gtest.h>
#include "../inc/PasswordSystem.hpp"

struct PasswordSystemTest : public ::testing::Test {
  PasswordSystem PassSysGtest;
};

TEST_F(PasswordSystemTest, keyIsSymmetricOdd_1) {
  std::string result = PassSysGtest.helpZoom({0, 0, 0, 0, 0});
  ASSERT_STREQ("Yes", result.c_str());
}

TEST_F(PasswordSystemTest, keyIsSymmetricOdd_2) {
  std::string result = PassSysGtest.helpZoom({0, 0, 1, 0, 0});
  ASSERT_STREQ("Yes", result.c_str());
}

TEST_F(PasswordSystemTest, keyIsNotSymmetricOdd_1) {
  std::string result = PassSysGtest.helpZoom({0, 0, 0, 0, 1});
  ASSERT_STREQ("No", result.c_str());
}

TEST_F(PasswordSystemTest, keyIsSymmetricEven_1) {
  std::string result = PassSysGtest.helpZoom({0, 0, 0, 0});
  ASSERT_STREQ("Yes", result.c_str());
}

TEST_F(PasswordSystemTest, keyIsSymmetricEven_2) {
  std::string result = PassSysGtest.helpZoom({0, 0, 0, 1});
  ASSERT_STREQ("No", result.c_str());
}
