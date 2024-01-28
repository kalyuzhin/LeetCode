//
// Created by Марк Калюжин on 27.01.2024.
//

#include "2.2.h"


ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    auto result = new ListNode();
    ListNode *iter = result;
    while (l1 != nullptr && l2 != nullptr) {
        iter->val = (iter->val + l1->val + l2->val) % 10;
        if (l1->next != nullptr || l2->next != nullptr) {
            iter->next = new ListNode();
            iter->next->val = (l1->val + l2->val) / 10;
        }
        iter = iter->next;
        l1 = l1->next;
        l2 = l2->next;
    }
    while (l1 != nullptr) {
        iter->val = (iter->val + l1->val) % 10;
        iter->next = l1->next == nullptr ? nullptr : new ListNode();
        iter->next->val = (l1->val + iter->val) / 10;
        iter = iter->next;
        l1 = l1->next;
    }

    while (l2 != nullptr) {
        iter->val = (iter->val + l2->val) % 10;
        iter->next = l2->next == nullptr ? nullptr : new ListNode();
        iter->next->val = (l2->val + iter->val) / 10;
        iter = iter->next;
        l2 = l2->next;
    }
    return result;
}