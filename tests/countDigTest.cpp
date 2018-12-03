#include <gtest/gtest.h>
#include "../inc/CountDig.hpp"

struct CountDigTest : public ::testing::Test {
  CountDig digits1;
};

TEST_F(CountDigTest, checkDigits) {
  int result = digits1.nbDig(1,2);
  ASSERT_TRUE(result == 4);
}

