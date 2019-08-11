#include "../inc/SortOutTheManFromBoys.hpp"

std::vector<int> SortOutTheManFromBoys::menFromBoys(std::vector<int> values) {
  std::vector<int> result{};
  for (std::vector<int>::iterator it = values.begin(); it != values.end();) {
    if (*it % 2 == 0) {
      result.push_back(*it);
      it = values.erase(it);
    } else {
      ++it;
    }
  }
  // std::copy(values.begin(), values.end(), std::back_inserter(result));
  return result;
}

std::vector<int> SortOutTheManFromBoys::ascendingVectorForEvenNumbers(
    std::vector<int> values) {
  return values;
}
std::vector<int> SortOutTheManFromBoys::descendingVectorForOddNumbers(
    std::vector<int> values) {
  return {};
}
