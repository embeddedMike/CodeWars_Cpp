#include <iostream>
#include <string>
//#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <unordered_map>
#include <algorithm>
#include "../inc/main.hpp"
#include "../inc/sumStrings.hpp"
#include <array>

std::string driver(const std::array<std::string, 5> &data){    
    std::map<std::string,std::string> months = {
        {"Jan","01"},
        {"Feb","02"},
        {"Mar","03"},
        {"Apr","04"},
        {"May","05"},
        {"June","06"},
        {"Jul","07"},
        {"Aug","08"},
        {"Sep","09"},
        {"Oct","10"},
        {"Nov","11"},
        {"Dec","12"},
    };
    std::string result;
    if(data.at(2).size() > 5){
        result += data.at(2).substr(0,5);
    }else
    {
        result += data.at(2).substr(0,data.at(2).size());
        result.append(5 - data.at(2).size(),'9');
    }
    std::transform(result.begin(),result.end(),result.begin(),[](unsigned char c) -> unsigned char { return std::toupper(c); });
    int index = data.at(3).size() - 2;
    result += data[3][index];
    if(data.at(4) == "M") {
        std::cout<< data.at(3).substr(3,3)<<std::endl;
        for(std::map<std::string,std::string>::iterator it = months.begin(); it != months.end(); ++it) {
            if(data.at(3).substr(3,3) == it->first) {
                result += it->second;
            }
        }
   }else {   
        for(std::map<std::string,std::string>::iterator it = months.begin(); it != months.end(); ++it) {
            if(data.at(3).substr(3,3) == it->first) {
                std::string women;
                char valTmp = it->second[0];
                int value = (int)valTmp;
                value += 5;
                valTmp = (char)value;
                //it->second[0] = valTmp;
                women += valTmp;
                women += it->second[1];
                result += women;
                std::cout<<women;
            }
        }
    }
    result += data[3][0];
    result += data[3][1];
    index = data.at(3).size() - 1;
    result += data[3][index];
    result += data[0][0];
    if(data.at(1).empty()) {
        result += '9';
    }else {
        result += data[1][0];
    }
    result += "9AA";
    std::cout<<result<<std::endl;
    std::transform(result.begin(),result.end(),result.begin(),[](unsigned char c) -> unsigned char { return std::toupper(c); });
    return result;
}




int main() {
    int ammo = 4;
    double aim = 0.64;
    int coefficient = static_cast<int>(ammo * aim);
    std::string score = "|~~2~~~22~2~~22~2~~~~2~~~|";
    for(std::string::iterator it = score.begin()+1; it != score.end()-1; it++) {
        if(*it == '2' && coefficient != 0){
            *it = 'X';
            coefficient--;
        }
    }
    for(std::string::iterator it = score.begin(); it != score.end(); it++) {
        std::cout<<*it;
    }
}
