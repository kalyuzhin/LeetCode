//
// Created by Марк Калюжин on 27.01.2024.
//

#include "1.9.h"
#include <iostream>


int searchInsert(std::vector<int> &nums, int target) {
    int i = 0;
    while (i != nums.size() && nums[i] < target) {
        ++i;
    }
    return i;
}