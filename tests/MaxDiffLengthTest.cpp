#include <gtest/gtest.h>
#include "../inc/MaxDiffLength.hpp"

struct MaxDiffLengthTest : public ::testing::Test {
  MaxDiffLength MaxDiffLengthGtest;
};

TEST_F(MaxDiffLengthTest, getValueFromMxDifLg)
{
  std::vector<std::string> s1 = {"hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"};
  std::vector<std::string> s2 = {"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};
  int result = MaxDiffLengthGtest.mxdiflg(s1,s2);
  ASSERT_TRUE(result == 13);
}

TEST_F(MaxDiffLengthTest, getValueFromMxDifLg_2)
{
  std::vector<std::string> s1 = {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"};
  std::vector<std::string> s2 = {"bbbaaayddqbbrrrv"};
  int result = MaxDiffLengthGtest.mxdiflg(s1,s2);
  ASSERT_TRUE(result == 10);
}

TEST_F(MaxDiffLengthTest, getValueFromMxDifLg_3)
{
  std::vector<std::string> s1 = {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"};
  std::vector<std::string> s2 = {};
  int result = MaxDiffLengthGtest.mxdiflg(s1,s2);
  ASSERT_TRUE(result == -1);
}
