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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* h1 = list1;
        ListNode* h2 = list2;
        ListNode* h = nullptr;
        ListNode* t = nullptr;
        bool first = true;

        while (h1 && h2) {
            if (first) {
                if (h1->val <= h2->val) {  
                    h = h1;
                    h1 = h1->next;
                } else {
                    h = h2;
                    h2 = h2->next;
                }
                t = h;  
                first = false;
            } else {
                if (h1->val <= h2->val) {  
                    t->next = h1;
                    t = t->next;
                    h1 = h1->next;
                } else {
                    t->next = h2;
                    t = t->next;
                    h2 = h2->next;
                }
            }
        }

        if (!h1) {
            t->next = h2;
        } else {
            t->next = h1;
        }

        return h;
    }
};