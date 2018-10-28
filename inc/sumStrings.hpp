#pragma once
#include <string>

class SumStrings {
  std::string firstNumber_;
  std::string secondNumber_;
  public:
  SumStrings() = default;
  SumStrings(const SumStrings &) = delete;
  SumStrings(SumStrings &&) = delete;
  ~SumStrings() = default;
  SumStrings(std::string firstNumber, std::string secondNumber);
  
  std::string sumValues();
};
