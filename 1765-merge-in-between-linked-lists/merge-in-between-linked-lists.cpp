/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prevA = list1;
        for (int count = 0; count < a - 1; ++count) {
            prevA = prevA->next;
        }
        ListNode* afterB = prevA->next;
        for (int count = a; count <= b; ++count) {
            afterB = afterB->next;
        }
        prevA->next = list2;
        ListNode* tail2 = list2;
        while (tail2->next != nullptr) {
            tail2 = tail2->next;
        }
        tail2->next = afterB;
        return list1;
    }
};