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
        if(list2==NULL){
            return list1;
        }
        if(list1==NULL){
            return list2;
        }
        vector<int>num;
        while(list1!=NULL){
            num.push_back(list1->val);
            list1=list1->next;
        }
         while(list2!=NULL){
            num.push_back(list2->val);
            list2=list2->next;
        }
        sort(num.begin(),num.end());
        ListNode *newly=new ListNode(num[0]);
        ListNode *dup=newly;
        for(int i=1;i<num.size();i++){
            ListNode *temp=new ListNode(num[i]);
            newly->next=temp;
            newly=newly->next;

        }
        return dup;
        
        
    }
};