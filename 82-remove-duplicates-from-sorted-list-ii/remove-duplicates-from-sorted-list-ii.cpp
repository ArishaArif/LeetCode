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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){return nullptr;}
        ListNode*prev=nullptr;
        ListNode*curr=head;
        ListNode*nxt=curr->next;
        bool dup=false;
        while(nxt){
        if(curr->val==nxt->val){
            while(nxt && nxt->val==curr->val){
                nxt=nxt->next;
            }
            if(prev){
            prev->next=nxt;}
            curr=nxt;
            if(nxt){
            nxt=nxt->next;}
            if(!prev){
                head=curr;
            }
        }else{
            prev=curr;
            curr=nxt;
            if(nxt){
            nxt=nxt->next;}
        }
        }
        return head;
    }
};