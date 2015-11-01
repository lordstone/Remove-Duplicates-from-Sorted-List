/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode *cur = head->next;
        ListNode *anchor = head;
        anchor->next = NULL;
        int myval = head -> val;
        while(cur != NULL){
            if(cur->val != myval){
                anchor->next = cur;
                anchor = cur;
                myval = cur->val;
                
            }else{
                anchor->next = NULL;
            }
            cur = cur->next;
        }
        return head;
    }
};
