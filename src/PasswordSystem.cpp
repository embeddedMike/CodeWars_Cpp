#include "../inc/PasswordSystem.hpp"

std::string PasswordSystem::helpZoom(std::vector<int> key) {
  bool isSymmetric = isSymmetric = std::equal(key.begin(),key.begin() + key.size()/2, key.rbegin());
  if(isSymmetric) {
    return "Yes";
  }else {
    return "No";
  }
}
