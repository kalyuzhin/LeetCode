//
// Created by Марк Калюжин on 26.01.2024.
//

#include "1.7.h"

int removeElement(std::vector<int> &nums, int val) {
    auto it = std::remove_if(nums.begin(), nums.end(), [=](auto x) { return val == x; });
    nums.erase(it, nums.end());
    return it - nums.begin();
}