#include <gtest/gtest.h>
#include "../inc/EvenNumbers.hpp"

struct EvenNumbersTest : public ::testing::Test {
  EvenNumbers EvenNumbersGtest;
};

TEST_F(EvenNumbersTest, getResultFromEvenNumbersInVector) {
  std::vector<int> result = EvenNumbersGtest.evenNumbersInVector({1,2,3},3);
  ASSERT_TRUE(result[2] == 1);
}
