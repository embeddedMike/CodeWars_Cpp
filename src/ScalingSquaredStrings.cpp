#include "../inc/ScalingSquaredStrings.hpp"
std::string ScalingSquaredStrings::scale(const std::string &strng, int k,
                                         int n) {
  std::string result("");
  std::string finalResult("");
  std::regex reg("[^\\n][a-zA-Z0-9]+");
  for (std::string::const_iterator it = strng.begin(); it != strng.end();
       ++it) {
    if (*it != '\n') {
      for (int i = 0; i < k; i++) {
        result += (*it);
      }
    } else {
      result += '\n';
    }
  }
  std::sregex_iterator currentMatch(result.begin(), result.end(), reg);
  std::sregex_iterator lastMatch = std::sregex_iterator();
  for (std::sregex_iterator i = currentMatch; i != lastMatch; ++i) {
    std::smatch match = *i;
    for (int i = 0; i < n; i++) {
      finalResult += match.str();
      finalResult += '\n';
    }
  }
  finalResult.pop_back();
  return finalResult;
}
