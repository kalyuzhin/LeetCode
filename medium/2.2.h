//
// Created by Марк Калюжин on 27.01.2024.
//

#ifndef LEETCODE_2_2_H
#define LEETCODE_2_2_H

// https://leetcode.com/problems/add-two-numbers/

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);


#endif //LEETCODE_2_2_H
