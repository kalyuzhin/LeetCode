//
// Created by Марк Калюжин on 26.01.2024.
//

#include "1.5.h"

ListNode *merge_two_lists(ListNode *list1, ListNode *list2) {
    if (list1 == nullptr && list2 == nullptr) {
        return nullptr;
    }
    auto *result = new ListNode();
    ListNode *iter = result;
    while (list1 != nullptr && list2 != nullptr) {
        iter->next = new ListNode();
        if (list1->val < list2->val) {
            iter->val = list1->val;
            list1 = list1->next;
        } else {
            iter->val = list2->val;
            list2 = list2->next;
        }
        iter = iter->next;
    }
    while (list1 != nullptr) {
        iter->val = list1->val;
        if (list1->next != nullptr) {
            iter->next = new ListNode();
        }
        list1 = list1->next;
        iter = iter->next;
    }
    while (list2 != nullptr) {
        iter->val = list2->val;
        if (list2->next != nullptr) {
            iter->next = new ListNode();
        }
        list2 = list2->next;
        iter = iter->next;
    }

    return result;
}