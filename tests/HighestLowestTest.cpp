#include <gtest/gtest.h>
#include "../inc/HighestLowest.hpp"

struct HighestLowestTest : public ::testing::Test {
    HighestLowest highestlowest1;
};

TEST_F(HighestLowestTest,appendHighestAndLowestValue) {
    std::string result = highestlowest1.highAndLow("4 1 -2129 33 -9 3334");
    std::cout << result << std::endl;
    ASSERT_TRUE(result == "3334 -2129");
}

