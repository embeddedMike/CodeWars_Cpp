#include <regex>
#include <string>
class ScalingSquaredStrings {
 public:
  static std::string horizontalScale(const std::string &strng, int k);
  static std::string verticalScale(const std::string &strng, int n);
  static std::string finalScale(const std::string &strng, int k, int n);
};
