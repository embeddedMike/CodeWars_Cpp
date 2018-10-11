#include <iostream>
#include <string>
#include <algorithm>
#include "../inc/main.hpp"


int main() {

  std::cout<<fibonacciNumbers(10)<<std::endl;

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
