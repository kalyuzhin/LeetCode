//
// Created by Марк Калюжин on 28.12.2023.
//

#include "1.4.h"


bool isValid(std::string s) {
    std::stack<char> stack;
    stack.push(s[0]);
    for (size_t i = 1; i != s.size(); ++i) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack.push(s[i]);
        } else if (stack.empty() || ((s[i] == ')' && stack.top() != '(') || (s[i] == ']' && stack.top() != '[') ||
                                     (s[i] == '}' && stack.top() != '{'))) {
            return false;
        } else {
            stack.pop();
        }
    }
    return stack.empty();
}

void tests_4() {
    assert(isValid("{}"));
    assert(isValid("((())){}{}[()]"));
    assert(isValid("(){}}") == false);
    assert("");
}