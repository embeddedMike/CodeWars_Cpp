#include "../inc/CountDig.hpp"

int CountDig::nbDig(int n, int d) {
    int result = 0;
    std::string digit("");
    std::string countDigit(std::to_string(d));
    for(int i = 0; i <= n; i++) {
        digit += std::to_string((int)pow(i,2));
        for(auto item : digit){
            if(item == countDigit[0]) {
                result++;
            }
        }
        digit.clear();
    }
    return result;
}
