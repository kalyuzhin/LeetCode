//
// Created by Марк Калюжин on 27.12.2023.
//

#include "2.1.h"


// Task
// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/?envType=daily-question&envId=2023-12-27

int minCost(std::string &colors, const std::vector<int> &neededTime) {
    int sum = 0;
    for (size_t i = 0; i != colors.size() - 1; ++i) {
        if (colors[i] == colors[i + 1]) {
            sum += std::min(neededTime[i], neededTime[i + 1]);
        }
    }
    return sum;
}

