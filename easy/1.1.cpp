//
// Created by Марк Калюжин on 28.12.2023.
//

#include "1.1.h"


bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    int t = x;
    size_t pow_right = 1;
    while (t) {
        pow_right *= 10;
        t /= 10;
    }
    pow_right /= 10;
    size_t pow_left = 1;
    while (pow_right) {
        if (x / pow_left % 10 != x / pow_right % 10) {
            return false;
        }
        pow_right /= 10;
        pow_left *= 10;
    }
    return true;
}

void tests_1() {
    assert(isPalindrome(121));
    assert(isPalindrome(-121) == false);
    assert(isPalindrome(10) == false);
    assert(isPalindrome(1221));
    assert(isPalindrome(1));
    assert(isPalindrome(1234567899) == false);
}
