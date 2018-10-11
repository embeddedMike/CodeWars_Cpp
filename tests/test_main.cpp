#include <gtest/gtest.h>
#include "../inc/main.hpp"

TEST(StringTest, spinWords) {
    EXPECT_TRUE(3 == 3);
}

TEST(FibonacciTest, n_3) {
  int fib = fibonacciNumbers(3);
  EXPECT_TRUE(fib == 3);
}
TEST(FibonacciTest, n_5) {
  int fib = fibonacciNumbers(5);
  EXPECT_TRUE(fib == 5);
}
TEST(FibonacciTest, n_7) {
  int fib = fibonacciNumbers(7);
  EXPECT_TRUE(fib == 13);
}
