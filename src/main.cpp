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
    const std::array<std::string, 5> data = {"Holland","Madeline","Scott","13-Jun-2000","M"};
    driver(data);
    //std::string str = "abc123";
    //std::transform(str.begin(),str.end(),str.begin(),[](unsigned char c) -> unsigned char { return std::toupper(c); });
    //std::cout<<str;
    
    
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

    std::cout<<data.at(3).substr(3,3);

    
        for(std::map<std::string,std::string>::iterator it = months.begin(); it != months.end(); ++it) {
            if(data.at(3).substr(3,3) == it->first) {
                char valTmp = it->second[0];
                std::cout<<valTmp;
                int value = (int)valTmp;
                value += 5;
                //valTmp = (char)value;
                //it->second[0] = valTmp;
            }
        }

    /*
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
    int index = data.at(3).size() - 2;
    result += data[3][index];
    if(data.at(4) == "M") {
        std::cout<< data.at(3).substr(3,3)<<std::endl;
        //for(auto const& [key, val] : months) {
        //    if(data.at(3).substr(3,3) == key){
        //        result += val;
        //    }
        //}
        for(std::map<std::string,std::string>::iterator it = months.begin(); it != months.end(); ++it) {
            if(data.at(3).substr(3,3) == it->first) {
                result += it->second;
            }
        }
   }else {   
        //for(auto& [key, val] : months) {
        //    if(data.at(3).substr(3,3) == key){
        //        char valTmp = val[0];
        //        int value = (int)valTmp;
        //        value += 5;
        //        valTmp = (char)value;
        //        val[0] = valTmp;
        //    }
        for(std::map<std::string,std::string>::iterator it = months.begin(); it != months.end(); ++it) {
            if(data.at(3).substr(3,3) == it->first) {
                char valTmp = it->second[0];
                int value = (int)valTmp;
                value += 5;
                valTmp = (char)value;
                it->second[0] = valTmp;
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
    */
}
