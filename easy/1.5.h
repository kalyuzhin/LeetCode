//
// Created by Марк Калюжин on 26.01.2024.
//

#ifndef LEETCODE_1_5_H
#define LEETCODE_1_5_H

// https://leetcode.com/problems/merge-two-sorted-lists

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* merge_two_lists(ListNode* list1, ListNode* list2);

void tests_5(){

}

#endif //LEETCODE_1_5_H
