#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../inc/SortOutTheManFromBoys.hpp"

struct SortOutTheManFromBoysTest : public ::testing::Test {
  SortOutTheManFromBoys SortOutTheManFromBoysUnitTest;
};

TEST_F(SortOutTheManFromBoysTest, getResultFromAscendingVectorForEvenNumbers) {
  std::vector<int> result =
      SortOutTheManFromBoysUnitTest.descendingVectorForOddNumbers(
          {11, 2, 3, 4, 11, 14, -11, -2, 4, 11, 4});
  ASSERT_THAT(result, ::testing::ElementsAre(2, 14, -2, 4));
}

TEST_F(SortOutTheManFromBoysTest, getResultFromDescendingVectorForOddNumbers) {
  std::vector<int> result =
      SortOutTheManFromBoysUnitTest.descendingVectorForOddNumbers(
          {11, 2, 3, 4, 11, 14, -11, -2, 4, 11, 4});
  ASSERT_THAT(result, ::testing::ElementsAre(2, 14, -2, 4));
}

TEST_F(SortOutTheManFromBoysTest, getResultFromMenFromBoys) {
  std::vector<int> result = SortOutTheManFromBoysUnitTest.menFromBoys(
      {11, 2, 3, 4, 11, 14, -11, -2, 4, 11, 4});
  ASSERT_THAT(result, ::testing::ElementsAre(2, 14, -2, 4));
}
