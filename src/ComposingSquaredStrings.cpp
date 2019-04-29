#include "../inc/ComposingSquaredStrings.hpp"
std::string ComposingSquaredStrings::compose(const std::string &s1,
                                             const std::string &s2) {
  std::string result("");
  std::vector<std::string> partialStringsForS1 = vectorOfPartialStrings(s1);
  std::vector<std::string> partialStringsForS2 = vectorOfPartialStrings(s2);
  int counterForReverseSeq = partialStringsForS2.size();
  for (int i = 0; i < partialStringsForS1.size(); ++i) {
    result.append(partialStringsForS1[i], 0, i + 1);
    result.append(partialStringsForS2[counterForReverseSeq - 1], 0,
                  counterForReverseSeq);
    if (i != partialStringsForS1.size() - 1) {
      result += '\n';
    }
    --counterForReverseSeq;
  }
  return result;
}
std::vector<std::string> ComposingSquaredStrings::vectorOfPartialStrings(
    const std::string &strng) {
  std::vector<std::string> result{};
  std::regex reg("[^\\n][a-zA-Z0-9]+");
  std::sregex_iterator currentMatch(strng.begin(), strng.end(), reg);
  std::sregex_iterator lastMatch = std::sregex_iterator();
  for (std::sregex_iterator i = currentMatch; i != lastMatch; ++i) {
    std::smatch match = *i;
    result.push_back(match.str());
  }
  return result;
}
