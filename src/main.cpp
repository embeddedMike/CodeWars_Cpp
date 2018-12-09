#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <cmath>
#include <math.h>
#include <unordered_map>
#include <algorithm>
#include "../inc/main.hpp"
#include "../inc/CountDig.hpp"
#include <regex>
#include <boost/lexical_cast.hpp>
int main() {
    int tmp = 0;
    std::string str = "1 9 3 4 -5 99 23 -1";
    std::regex reg(" |-?[0-9]* |-[0-9]");
    std::sregex_iterator currentMatch(str.begin(),str.end(), reg);
    std::sregex_iterator lastMatch = std::sregex_iterator();
    std::cout << "Found " 
              << std::distance(currentMatch, lastMatch) 
              << " words:\n";
    for (std::sregex_iterator i = currentMatch; i != lastMatch; ++i) {
        std::smatch match = *i;
        tmp = std::stoi(match.str());
        std::cout << tmp << std::endl;
    }
}
