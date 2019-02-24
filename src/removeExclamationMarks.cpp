#include "../inc/removeExclamationMarks.hpp"

std::string RemoveExclamationMarks::removeExlamationMarksProcedure(
    std::string str) {
  std::string result("");
  for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
    if (*it != '!') {
      result += *it;
    }
  }
  return result;
}
