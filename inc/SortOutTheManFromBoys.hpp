#pragma once
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>
class SortOutTheManFromBoys {
 public:
  std::vector<int> menFromBoys(std::vector<int> values);
  std::vector<int> ascendingVectorForEvenNumbers(std::vector<int> &values);
  std::vector<int> descendingVectorForOddNumbers(std::vector<int> &values);
};
