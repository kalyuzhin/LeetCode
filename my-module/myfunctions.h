//
// Created by Марк Калюжин on 26.01.2024.
//

#ifndef LEETCODE_MYFUNCTIONS_H
#define LEETCODE_MYFUNCTIONS_H

#include <iostream>
#include <ostream>
#include <vector>
#include <stack>
#include <deque>
#include <list>
#include <array>


template<typename T>
inline std::ostream &operator<<(std::ostream &os, std::stack<T> stack) {
    while (!stack.empty()) {
        os << stack.top();
        stack.pop();
    }
    return os;
}

template<typename T>
inline std::ostream &operator<<(std::ostream &os, std::vector<T> container) {
    for (const auto &elem: container) {
        os << elem << " ";
    }
    return os;
}

#endif //LEETCODE_MYFUNCTIONS_H
