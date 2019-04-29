#include <gtest/gtest.h>
#include "../inc/FormTheLargest.hpp"

struct FormTheLargestTest : public ::testing::Test {
  FormTheLargest LargestUnitTest;
};

TEST_F(FormTheLargestTest, getValueFromMaxNumber) {
  long long int result = LargestUnitTest.maxNumber(234256);
  ASSERT_TRUE(result == 0);
}
