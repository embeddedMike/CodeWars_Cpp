#include <gtest/gtest.h>
#include "../inc/Printer.hpp"

struct PrinterTest : public ::testing::Test {
    Printer printer1;
};

TEST_F(PrinterTest, checkResult) {
    std::string result = printer1.printerError("sdfsdf");
    std::cout << result << std::endl;
    ASSERT_TRUE(result == "0/14");
}
