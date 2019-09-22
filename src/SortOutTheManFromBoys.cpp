#include "../inc/SortOutTheManFromBoys.hpp"

std::vector<int> SortOutTheManFromBoys::menFromBoys(std::vector<int> values) {
  std::vector<int> result{};
  std::vector<int> ascendingVector{};
  std::vector<int> descendingVector{};
  for (std::vector<int>::iterator it = values.begin(); it != values.end();
       ++it) {
    if (*it % 2 == 0) {
      ascendingVector.push_back(*it);
    } else {
      descendingVector.push_back(*it);
    }
  }
  ascendingVectorForEvenNumbers(ascendingVector);
  descendingVectorForOddNumbers(descendingVector);
  std::move(ascendingVector.begin(), ascendingVector.end(),
            std::back_inserter(result));
  std::move(descendingVector.begin(), descendingVector.end(),
            std::back_inserter(result));
  return result;
}

std::vector<int> SortOutTheManFromBoys::ascendingVectorForEvenNumbers(
    std::vector<int> &values) {
  std::sort(values.begin(), values.end(), std::less<int>());
  auto last = std::unique(values.begin(), values.end());
  values.erase(last, values.end());
  return values;
}
std::vector<int> SortOutTheManFromBoys::descendingVectorForOddNumbers(
    std::vector<int> &values) {
  std::sort(values.begin(), values.end(), std::greater<int>());
  auto last = std::unique(values.begin(), values.end());
  values.erase(last, values.end());
  return values;
}
