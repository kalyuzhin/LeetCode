//
// Created by Марк Калюжин on 29.01.2024.
//

#include "1.11.h"
#include <iostream>

std::vector<int> plusOne(std::vector<int> &digits) {
    digits[digits.size() - 1] += 1;
    for (auto i = digits.size() - 1; i != 0; --i) {
        if (digits[i] / 10 == 1) {
            digits[i] = 0;
            digits[i - 1] += 1;
        }
    }
    if (digits[0] >= 10) {
        digits[0] = digits[0] % 10;
        digits.insert(digits.begin(), 1);
    }
    return digits;
}