//
// Created by Марк Калюжин on 26.01.2024.
//

#include "1.6.h"
#include <iostream>

int remove_duplicates(std::vector<int> &nums) {
    auto it = std::unique(nums.begin(), nums.end());
    nums.erase(it, nums.end());
    return it - nums.begin();
}

int removeDuplicates(std::vector<int> &nums) {
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        if (*it == *++it) {
            std::shift_left(it, nums.end(), 1);
        }
    }
    return 0;
}


