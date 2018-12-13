#include "../inc/HighestLowest.hpp"

std::string HighestLowest::highAndLow(const std::string& numbers) {
    std::string result("");
    int tmp = 0;
    std::regex reg(" |-?[0-9]* |-[0-9]");
    std::sregex_iterator currentMatch(numbers.begin(),numbers.end(),reg);
    std::sregex_iterator lastMatch = std::sregex_iterator();
    for(std::sregex_iterator i = currentMatch; i != lastMatch; ++i) {
        std::smatch match = *i;
        tmp = std::stoi(match.str());
    }
    for(auto& item : std::to_string(tmp)) {
        result.push_back(item);
    }
    return result;
}
