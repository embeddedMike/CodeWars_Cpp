#include <gtest/gtest.h>
#include "../inc/FormTheLargest.hpp"

struct FormTheLargestTest : public ::testing::Test {
  FormTheLargest LargestGtest;
};

TEST_F(FormTheLargestTest, getValueFromMaxNumber) {
  long long int result = LargestGtest.maxNumber(234256);
  ASSERT_TRUE(result == 654322);
}
