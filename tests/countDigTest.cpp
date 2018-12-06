#include <gtest/gtest.h>
#include "../inc/CountDig.hpp"

struct CountDigTest : public ::testing::Test {
  CountDig digits1;
};

TEST_F(CountDigTest, checkDigits) {
  int result = digits1.nbDig(11011,2);
  std::cout << result << std::endl;
  ASSERT_TRUE(result == 9481);
}

TEST_F(CountDigTest, checkDigits2) {
  int result = digits1.nbDig(5750,0);
  std::cout << result << std::endl;
  ASSERT_TRUE(result == 4700);
}

TEST_F(CountDigTest, checkDigits3) {
  int result = digits1.nbDig(12224,8);
  std::cout << result << std::endl;
  ASSERT_TRUE(result == 7733);
}

TEST_F(CountDigTest, checkDigits4) {
  int result = digits1.nbDig(10,0);
  std::cout << result << std::endl;
  ASSERT_TRUE(result == 0);
}

