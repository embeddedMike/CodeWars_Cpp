#include "../inc/HighestLowest.hpp"

std::string HighestLowest::highAndLow(const std::string& numbers) {
    std::string result(" ");
    std::string copyNumbers;
    std::copy(numbers.begin(),numbers.end(),std::back_inserter(copyNumbers));
    for(auto item : copyNumbers) {
        std::cout << item << std::endl;
    }
    result.insert(0,"42");
    return result;
}
