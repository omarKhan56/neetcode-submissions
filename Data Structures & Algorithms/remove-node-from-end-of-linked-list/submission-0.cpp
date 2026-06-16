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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        //move fast upto n
        for(int i=0;i<n;i++){
            fast = fast->next;
        }
        //edge case
        if(fast == NULL){
            return head->next;
        }
        while(fast!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        //delete the nth node
        prev->next = slow->next;
        return head;
        
    }
};
