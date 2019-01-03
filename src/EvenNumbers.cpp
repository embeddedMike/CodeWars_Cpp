#include "../inc/EvenNumbers.hpp"

std::vector<int> EvenNumbers::evenNumbersInVector(std::vector<int> arr, int n) {
  std::vector<int> result{};
  for(int i = 0; i < n; i++){
    for(std::vector<int>::reverse_iterator it = arr.rbegin(); it != arr.rend(); it++) {
      result.push_back(*it);
    }
  }
  return result;
}
