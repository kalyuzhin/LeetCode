//
// Created by Марк Калюжин on 28.12.2023.
//

#include "1.3.h"


std::string longestCommonPrefix(std::vector<std::string> &strs) {
    std::string result;
    for (size_t i = 0; i != strs[0].size(); ++i) {
        std::string elem;
        for (size_t j = 0; j != strs.size(); ++j) {
            elem += strs[j][i];
        }
        if (std::all_of(elem.begin(), elem.end(), [&](auto x) { return elem[0] == x; })) {
            result += elem[0];
        } else {
            return result;
        }
    }
    return result;
}

void tests_3() {
    std::vector<std::string> v{"flower", "flow", "flight"};
    assert(longestCommonPrefix(v) == "fl");
    v = {"dog", "racecar", "car"};
    assert(longestCommonPrefix(v).empty());

}