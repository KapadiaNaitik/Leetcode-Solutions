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
        ListNode *current= new ListNode(0);
        ListNode *copy=current;
        while(head->next!=NULL){
            head=head->next;
            if(head->val!=0){
                current->val+=head->val;
            }
            else{
                if(head->next!=NULL){

                ListNode *another= new ListNode(0);
                current->next=another;
                current=current->next;
                }
            }
        }
        return copy;
        
    }
};