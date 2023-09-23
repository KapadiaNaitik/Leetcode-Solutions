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
    int gcd(int val1,int val2){
        int gcd=0;
        if(val1>val2){


            for(int i=1;i<=val2;i++){
                if(val1%i==0  && val2%i==0){
                    gcd=i;
                }
            }
                return gcd;

        }
        else{
             for(int i=1;i<=val1;i++){
                if(val1%i==0  && val2%i==0){
                    gcd=i;
                }
            }
                return gcd;

        }
        return 0;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode * ans=head;

        int pos=0;
        ListNode * prev;
        while(head!=NULL){
            if(pos%2!=0){
                ListNode *newly= new ListNode(gcd(prev->val,head->val));
                prev->next=newly;
                newly->next=head;
                pos--;

            }
            prev=head;
            head=head->next;
            pos++;
        }       
        return ans;
      

        
    }
};