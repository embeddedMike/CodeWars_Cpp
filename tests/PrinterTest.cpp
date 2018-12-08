#include <gtest/gtest.h>
#include "../inc/Printer.hpp"

struct PrinterTest : public ::testing::Test {
    Printer printer1;
};

TEST_F(PrinterTest, fillNumberOfCharacters) {
    std::string result = printer1.printerError("aaabbb");
    std::cout << result << std::endl;
    ASSERT_TRUE(result == "0/6");
}

TEST_F(PrinterTest, fillNumberOfCharacters2) {
    std::string result = printer1.printerError("aaabbbcccdddee");
    std::cout << result << std::endl;
    ASSERT_TRUE(result == "0/14");
}

TEST_F(PrinterTest, fillNumberOfErrorCharacters) {
    std::string result = printer1.printerError("abczzz");
    std::cout << result << std::endl;
    ASSERT_TRUE(result == "3/6");
}
