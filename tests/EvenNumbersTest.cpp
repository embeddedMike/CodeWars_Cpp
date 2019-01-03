#include <gtest/gtest.h>
#include "../inc/EvenNumbers.hpp"

struct EvenNumbersTest : public ::testing::Test {
  EvenNumbers EvenNumbersGtest;
};

TEST_F(EvenNumbersTest, getSizeOfResultVector) {
  std::vector<int> result = EvenNumbersGtest.evenNumbersInVector({-2,0,1,2,3},2);
  ASSERT_TRUE(result.size() == 2);
}
