#include "../inc/sumStrings.hpp"

SumStrings::SumStrings(std::string firstNumber, std::string secondNumber) 
  : firstNumber_(firstNumber),
    secondNumber_(secondNumber)
  {}

std::string SumStrings::sumValues() {
  int result = stoi(firstNumber_) + stoi(secondNumber_);
  return std::to_string(result);
}
