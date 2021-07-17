//
// Created by BrandonZu on 2021/7/17.
//

#ifndef LEETCODE_LINKEDLISTNODE_H
#define LEETCODE_LINKEDLISTNODE_H

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif //LEETCODE_LINKEDLISTNODE_H
