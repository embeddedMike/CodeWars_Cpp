#include "../inc/MaxDiffLength.hpp"

int MaxDiffLength::mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2)
{
  if(a1.size() > 1)
  {
    std::sort(a1.begin(),a1.end(), [] (auto i, auto j) {return (i.size() < j.size()); });
  }
  if(a2.size() > 1)
  {
    std::sort(a2.begin(),a2.end(), [] (auto i, auto j) {return (i.size() < j.size()); });
  }
  if(a1.size() == 0 or a2.size() == 0)
  {
    return -1;
  }
  if(a2.back().length() - a1.front().length() > a1.back().length() - a2.front().length())
  {
    return a2.back().length() - a1.front().length();
  }
  else
  {
    return a1.back().length() - a2.front().length();
  }
}
