#include <gtest/gtest.h>
#include "../inc/OppositeNumber.hpp"

struct OppositeNumberTest : public ::testing::Test {
  OppositeNumber OppositeNumberGtest;
};

TEST_F(OppositeNumberTest, getResultFromOpposite) {
  int result = OppositeNumberGtest.opposite(1);
  ASSERT_TRUE(result == -1);
}
