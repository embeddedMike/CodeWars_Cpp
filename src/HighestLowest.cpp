#include "../inc/HighestLowest.hpp"

std::string HighestLowest::highAndLow(const std::string& numbers) {
    std::string result("");
    int lowestValue = 0;
    int highestValue = 0;
    int counter = 0;
    std::regex reg(" |-?[0-9]* |-?[0-9]+");
    std::sregex_iterator currentMatch(numbers.begin(),numbers.end(),reg);
    std::sregex_iterator lastMatch = std::sregex_iterator();
    for(std::sregex_iterator i = currentMatch; i != lastMatch; ++i) {
        std::smatch match = *i;
        if(counter == 0) {
            highestValue = std::stoi(match.str());
            counter++;
        }
        if(counter >= 1) {
            if(highestValue < std::stoi(match.str())) {
                highestValue = std::stoi(match.str());
            }
        }
    }
    counter = 0;
    for(std::sregex_iterator i = currentMatch; i != lastMatch; ++i) {
        std::smatch match = *i;
        if(counter == 0) {
            lowestValue = std::stoi(match.str());
            counter++;
        }
        if(counter >= 1) {
            if(lowestValue > std::stoi(match.str())) {
                lowestValue = std::stoi(match.str());
            }
        }
    }
    result += std::to_string(highestValue);
    result += " ";
    result += std::to_string(lowestValue);
    return result;
}
