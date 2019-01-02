#include <gtest/gtest.h>
#include "../inc/VowelCount.hpp"

struct VowelCountTest : public ::testing::Test {
  VowelCount Vowels;
};

TEST_F(VowelCountTest, VowelsEqual1) {
  int result = Vowels.getCount("abc");
  ASSERT_TRUE(result == 1);
}

TEST_F(VowelCountTest, VowelsEqual2) {
  int result = Vowels.getCount("abco");
  ASSERT_TRUE(result == 2);
}


