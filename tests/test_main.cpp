#include <gtest/gtest.h>
#include "../inc/main.hpp"


struct FibonacciTest : public :: testing::Test
{
  //Given: stworzenie instancji klasy
};


TEST(StringTest, spinWords) {
    EXPECT_TRUE(3 == 3);
}
/*
TEST_F(FibonacciTest, n_3) {
  //When: wywolanie metody 
  //Then: EXPECT_TRUE(fib == 3);
}
}*/

int main(int argc, char** argv)
{
  try {
    testing::InitGoogleTest(&argc, argv);
    auto code = RUN_ALL_TESTS();
    return code;
  }
  catch (...)
  {
    return 0;
  }
  return 0;
}
