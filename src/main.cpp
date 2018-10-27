#include <iostream>
#include <string>
#include <algorithm>
#include "../inc/main.hpp"
#include <vector>
#include <map>
#include <unordered_map>
 
  std::vector<int> firstNSmallest(const std::vector<int> arr, int n) {
  std::vector<int> smallestElements = {};
  std::map<int,int> elementsMap;
  std::vector<int> arrCopy = {};
  std::vector<int>::iterator itSmallest[] = {};
  if(n == 0) {
    return smallestElements;
  }else {
    std::copy(arr.begin(),arr.end(),std::back_inserter(arrCopy));
    for(int i = 0; i < n; i++) {
      std::vector<int>::iterator result = std::min_element(std::begin(arrCopy), std::end(arrCopy));
      std::cout<<*result<<std::endl;
      smallestElements.push_back(*result);
      elementsMap[*result] = 0;
      arrCopy.erase(result);
    }
    //for(auto& item : smallestElements)
    //{
    //   std::cout<<item<<std::endl;
       //itSmallest = std::find_if(arr.begin(),arr.end(),item);
    //}

    //for(std::map<int,int>::iterator it = elementsMap.begin(); it != elementsMap.end(); it++) {
    //  std::cout << (*it).first << std::endl;
    //  
    //}
    
  }
    //std::reverse(smallestElements.begin(),smallestElements.end());
    return smallestElements;
}



int main() {
  std::vector<std::vector<int>::iterator> mins = {};
  std::unordered_multimap<int,int> elementsMap = {
    {1,1},
    {-4,4},
    {1,5}
  };
  std::vector<int> tablica  = {1,2,3,-4,1};
  std::vector<int> result = {};
  //for(std::pair<int,int> element : elementsMap) {
  //  std::cout << element.second << std::endl;
  //}
  std::vector<int>::iterator minIt = tablica.begin();
  for(int i = 0; i < 3; i++) {

    std::vector<int>::iterator result = std::min_element(minIt,tablica.end());
    if(minIt == result) {
      minIt++;
    }
    else {
      minIt = result+1;
    }
    std::cout << *result << std::endl;
  }
}

 
std::string spinWords(const std::string &str) {

  std::string result("");
  std::string copy(str);
  std::reverse(copy.begin(),copy.begin()+4);
  result += copy.substr(0,4);  

  return result;
}

int fibonacciNumbers(int n) {

  int fib = 0;
  int a = 1;
  int b= 2;
  
  if(n == 0) {
    return 0;
  }
  if(n == 1 || n == 2) {
    return 1;
  }
  for(int i = 2; i < n-1; i++) {
    fib = a + b;
    a = b;
    b = fib;
  }
  return fib;
}

int Fibonacci::fibonacciNumbers(int n) {
  return 0;
}
