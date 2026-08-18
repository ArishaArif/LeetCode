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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        bool first = true;
        ListNode* l = new ListNode(0); 
        ListNode* head = l;
        while (l1 != nullptr && l2 != nullptr) {
            int sum = l1->val + l2->val + carry;
            if (first) {
                l->val = sum % 10;
                carry = sum / 10;
                first = false;
            } else {
                ListNode* t = new ListNode(sum % 10); 
                carry = sum / 10;
                l->next = t;
                l = l->next; 
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l2 != nullptr) {
            int sum = l2->val + carry;
            ListNode* t = new ListNode(sum % 10);
            carry = sum / 10;
            l->next = t;
            l = l->next; 
            l2 = l2->next;
        }

        while (l1 != nullptr) {
            int sum = l1->val + carry;
            ListNode* t = new ListNode(sum % 10);
            carry = sum / 10;
            l->next = t;
            l = l->next; 
            l1 = l1->next;
        }
        if (carry) {
            l->next = new ListNode(carry);
        }

        return head;
    }
};