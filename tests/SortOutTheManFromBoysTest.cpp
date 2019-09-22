#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../inc/SortOutTheManFromBoys.hpp"

struct SortOutTheManFromBoysTest : public ::testing::Test {
  SortOutTheManFromBoys SortOutTheManFromBoysUnitTest;
};

TEST_F(SortOutTheManFromBoysTest, getResultFromMenFromBoys) {
  std::vector<int> result = SortOutTheManFromBoysUnitTest.menFromBoys(
      {11, 2, 3, 4, 11, 14, -11, -2, 4, 11, 4});
  ASSERT_THAT(result, ::testing::ElementsAre(-2, 2, 4, 14, 11, 3, -11));
}

TEST_F(SortOutTheManFromBoysTest, getResultFromAscendingVectorForEvenNumbers) {
  std::vector<int> ascendingData{2, 4, 14, -2, 4, 4};
  std::vector<int> result =
      SortOutTheManFromBoysUnitTest.ascendingVectorForEvenNumbers(
          ascendingData);
  ASSERT_THAT(result, ::testing::ElementsAre(-2, 2, 4, 14));
}

TEST_F(SortOutTheManFromBoysTest, getResultFromDescendingVectorForOddNumbers) {
  std::vector<int> descendingData{11, 3, 11, -11, 11};
  std::vector<int> result =
      SortOutTheManFromBoysUnitTest.descendingVectorForOddNumbers(
          descendingData);
  ASSERT_THAT(result, ::testing::ElementsAre(11, 3, -11));
}
