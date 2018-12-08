#include "../inc/Printer.hpp"

std::string Printer::printerError(const std::string &s) {
    std::string result("/");
    std::string numberErrors;
    int count = 0;
    result.append(std::to_string(s.length()));
    for(const auto& item : s) {
        if(static_cast<int>(item) > 109) {
            count++;
        }
    }
    result.insert(0,std::to_string(count));
    return result;
}
