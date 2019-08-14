/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode(int x) : val(x), next(NULL) {}
// };
class Solution {
 public:
  ListNode *reverseList(ListNode *head) {
    while (!head) {
      return nullptr;
    }
    ListNode *first = head;
    ListNode *target = head -> next;
    while (target != nullptr) {
      ListNode *temp = target -> next;
      first -> next = temp;
      target -> next = head;
      head = target;
      target = temp;
    }
    return head;
  }
};
