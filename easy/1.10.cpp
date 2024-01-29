//
// Created by Марк Калюжин on 28.01.2024.
//

#include "1.10.h"
#include <iostream>

int lengthOfLastWord(std::string s) {
    int count = 0;
    bool flag = false;
    for (auto i = s.rbegin(); i != s.rend(); ++i) {
        if (*i != ' ') {
            flag = true;
            ++count;
        }
        if (*i == ' ' && flag) {
            break;
        }
    }
    std::cout << count;
    return count;
}