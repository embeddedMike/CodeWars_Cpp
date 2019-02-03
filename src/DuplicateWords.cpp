#include "../inc/DuplicateWords.hpp"

std::string DuplicateWords::removeDuplicateWords(const std::string &str) {
  std::string result = "";
  std::string::size_type n;
  std::regex reg("[a-zA-Z0-9]+");
  std::sregex_iterator currentMatch(str.begin(), str.end(), reg);
  std::sregex_iterator lastMatch = std::sregex_iterator();
  for (std::sregex_iterator i = currentMatch; i != lastMatch; ++i) {
    std::smatch match = *i;
    n = result.find(match.str());
    if (n == std::string::npos) {
      result += match.str();
      result += ' ';
    }
    result.pop_back();
  }
  return result;
}
