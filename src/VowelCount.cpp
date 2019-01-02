#include "../inc/VowelCount.hpp"

int VowelCount::getCount(const std::string& inputStr){
  const std::string vowels = "aeiou";
  int num_vowels = 0;
  
  for(const auto item1 : inputStr) {
    for(const auto item2 : vowels) {
        if(item1 == item2) {
          num_vowels++;
        }
    }
  }
  
  return num_vowels;
}
