//
// Created by Марк Калюжин on 26.01.2024.
//

#include "1.6.h"


int removeDuplicates(std::vector<int> &nums) {
    auto it = std::unique(nums.begin(), nums.end());
    int n = nums.end() - it;
    nums.erase(it, nums.end());
    return n;
}
