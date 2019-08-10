#include <gtest/gtest.h>
#include "../inc/SortOutTheManFromBoys.hpp"

struct SortOutTheManFromBoysTest : public ::testing::Test {
  SortOutTheManFromBoys SortOutTheManFromBoysUnitTest;
};

TEST_F(SortOutTheManFromBoysTest, getResultMenFromBoys) {
  std::vector<int> result = SortOutTheManFromBoysUnitTest.menFromBoys({});
  ASSERT_TRUE(result.size() == 1);
}
