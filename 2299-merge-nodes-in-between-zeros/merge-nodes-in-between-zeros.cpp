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
    ListNode* mergeNodes(ListNode* head) {
    int sum=0;
    ListNode*temp=head->next;
    ListNode*t=new ListNode(0);
    ListNode*h=t;
    bool first=true;
    while(temp){
       if(temp->val==0){
         if(first){
            t->val=sum;
            sum=0;
            first=false;
         }else{
         ListNode*l=new ListNode(sum);
         sum=0;
         t->next=l;
         t=l;
         }
       }else{
        sum+=temp->val;
       }
       temp=temp->next;
    }
    return h;
    }
};