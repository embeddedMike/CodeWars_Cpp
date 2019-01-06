#include "../inc/Opstrings.hpp"

std::string Opstrings::vertMirror(const std::string &strng) 
{
  std::string result("");
  std::regex reg("[a-zA-Z0-9]+");
  std::sregex_iterator currentMatch(strng.begin(),strng.end(),reg);
  std::sregex_iterator lastMatch = std::sregex_iterator();
  for(std::sregex_iterator i = currentMatch; i != lastMatch; ++i) 
  {
    std::smatch match = *i;
    std::string match_str = match.str();
    std::reverse(std::begin(match_str), std::end(match_str));
    result += match_str;
    result += '\n';
    std::cout << result;
  }
  result.pop_back();
  return result;
}

std::string Opstrings::horMirror(const std::string &strng) 
{
  return "";
}
