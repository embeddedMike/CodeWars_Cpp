#include <gtest/gtest.h>
#include "../inc/HighestLowest.hpp"

struct HighestLowestTest : public ::testing::Test {
    HighestLowest highestlowest1;
};

TEST_F(HighestLowestTest,firstTest) {
    std::string result = highestlowest1.highAndLow("42 1 3 -9");
    ASSERT_TRUE(result == "42 -9");
}
