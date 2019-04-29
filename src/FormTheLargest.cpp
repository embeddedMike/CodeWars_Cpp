#include "../inc/FormTheLargest.hpp"

long long int FormTheLargest::maxNumber(long long int number) {
  std::vector<int> singleNumbers{};
  const int constDiff = 48;
  std::string intToStr = std::to_string(number);
  for (const auto item : intToStr) {
    singleNumbers.push_back(static_cast<int>(item) - constDiff);
  }
  std::sort(singleNumbers.begin(), singleNumbers.end(), std::greater<int>());
  intToStr.clear();
  for (int i = 0; i < singleNumbers.size(); ++i) {
    intToStr += static_cast<char>(singleNumbers[i] + constDiff);
  }
  long long int result = std::atoi(intToStr.c_str());
  return result;
}
