#include "../inc/ScalingSquaredStrings.hpp"

std::string ScalingSquaredStrings::horizontalScale(const std::string &strng,
                                                   int k) {
  std::string partialResult("");
  for (std::string::const_iterator it = strng.begin(); it != strng.end();
       ++it) {
    if (*it != '\n') {
      for (int i = 0; i < k; i++) {
        partialResult += (*it);
      }
    } else {
      partialResult += '\n';
    }
  }
  return partialResult;
}
std::string ScalingSquaredStrings::verticalScale(const std::string &strng,
                                                 int n) {
  std::string partialResult("");
  std::regex reg("[^\\n][a-zA-Z0-9]+");
  std::sregex_iterator currentMatch(strng.begin(), strng.end(), reg);
  std::sregex_iterator lastMatch = std::sregex_iterator();
  for (std::sregex_iterator i = currentMatch; i != lastMatch; ++i) {
    std::smatch match = *i;
    for (int i = 0; i < n; i++) {
      partialResult += match.str();
      partialResult += '\n';
    }
  }
  partialResult.pop_back();
  return partialResult;
}
std::string ScalingSquaredStrings::finalScale(const std::string &strng, int k,
                                              int n) {
  std::string finalResult("");
  finalResult = horizontalScale(strng, k);
  return verticalScale(finalResult, n);
}
