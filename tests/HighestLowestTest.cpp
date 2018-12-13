#include <gtest/gtest.h>
#include "../inc/HighestLowest.hpp"

struct HighestLowestTest : public ::testing::Test {
    HighestLowest highestlowest1;
};

TEST_F(HighestLowestTest,appendHighestAndLowestValue) {
    std::string result = highestlowest1.highAndLow("42 1 3 -9");
    std::cout << result << std::endl;
    ASSERT_TRUE(result == "-9");
}

