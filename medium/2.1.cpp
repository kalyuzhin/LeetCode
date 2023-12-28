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


void tests() {
    assert(minCost((std::string &) "aabaa", {1, 2, 3, 4, 1}) == 2);
    assert(minCost((std::string &) "abc", {1, 2, 3}) == 0);
    assert(minCost((std::string &) "abaac", {1, 2, 3, 4, 5}) == 3);
    assert(minCost((std::string &) "aaabbbabbbb", {3, 5, 10, 7, 5, 3, 5, 5, 4, 8, 1}) == 26);
}