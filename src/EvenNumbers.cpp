#include "../inc/EvenNumbers.hpp"

std::vector<int> EvenNumbers::evenNumbersInVector(std::vector<int> arr, int n) {
  std::vector<int> result{};
  int count = 0;
    for(std::vector<int>::reverse_iterator it = arr.rbegin(); it != arr.rend(); it++) {
      if(count < n) {
        if(*it % 2 == 0) {
          result.push_back(*it);
          count++;
        }
      }
    }
  return result;
}
