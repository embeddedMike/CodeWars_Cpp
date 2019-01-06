#pragma once
#include <string>
#include <regex>
#include <iostream>
class Opstrings
{
  public:
    static std::string vertMirror(const std::string &strng);
    static std::string horMirror(const std::string &strng);
    template<typename FN>
    static std::string oper(const FN& op, const std::string &strng) {
      return op(strng);
    }
};
