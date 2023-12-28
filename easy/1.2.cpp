//
// Created by Марк Калюжин on 28.12.2023.
//

#include "1.2.h"

int romanToInt(std::string s) {
    int result = 0;
    std::map<char, int> map{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };
    bool flag = false;
    for (auto i = s.rbegin(); i != s.rend(); ++i) {
//        result = flag? result -= map[*i] : result += map[*i];
//        if ((*i == 'V' || *i == 'X' || *i == 'L' || *i == 'C' || *i == 'D' || *i == 'M') && *i != *++i) {
//            flag = true;
//        } else {
//            flag = false;
//        }
        
    }
    return result;
}

void tests_2() {
    assert(romanToInt("III") == 3);
    assert(romanToInt("LVIII") == 58);
    assert(romanToInt("XIV") == 14);
    assert(romanToInt("MCMXCIV") == 1994);
}