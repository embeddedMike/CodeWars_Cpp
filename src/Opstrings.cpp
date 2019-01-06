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
  }
  result.pop_back();
  return result;
}

std::string Opstrings::horMirror(const std::string &strng) 
{
  std::string result("");
  std::vector<std::string> strContainer{};
  int lowerBound = 0;
  int upperBound = 0;
  std::regex reg("[a-zA-Z0-9]+");
  std::sregex_iterator currentMatch(strng.begin(),strng.end(),reg);
  std::sregex_iterator lastMatch = std::sregex_iterator();
  for(std::sregex_iterator i = currentMatch; i != lastMatch; ++i) 
  {
    std::smatch match = *i;
    std::string match_str = match.str();
    strContainer.push_back(match_str);
  }
  upperBound = strContainer.size() - 1;
  for(int i = 0; i < strContainer.size()/2; i++)
  {
    std::string tempUpperBound = strContainer.at(upperBound);
    strContainer.at(upperBound) = strContainer.at(lowerBound);
    strContainer.at(lowerBound) = tempUpperBound;
    lowerBound++;
    upperBound--;
    //std::cout << lowerBound << upperBound << std::endl;
  }
  for(auto item : strContainer)
  {
    result += item;
    result += '\n';
  }
  result.pop_back();
  return result;
}
