#pragma once
std::string spinWords(const std::string &str);
int fibonacciNumbers(int n);

class Fibonacci {
  int n_;

  Fibonacci(int n)
    : n_(n) {};

  public:
  int fibonacciNumbers(int n);
};
