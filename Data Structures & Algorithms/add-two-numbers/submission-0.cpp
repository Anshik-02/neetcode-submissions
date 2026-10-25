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
            ListNode* firstHead=l1;
        ListNode* secondHead=l2;
        ListNode dummy(0);
        ListNode* temp=&dummy;
        int carry=0;

        while(firstHead !=NULL || secondHead!=NULL || carry !=0){
            
            int sum=carry;

            if(firstHead!=NULL){
                sum+=firstHead->val;
            }
    
            if(secondHead!=NULL){
                sum+=secondHead->val;
            }

            int digit=sum%10;
            carry=sum/10;

            temp->next=new ListNode(digit);
            temp=temp->next;

            if(firstHead!=NULL){
                firstHead=firstHead->next;
            }

            if(secondHead!=NULL){
                secondHead=secondHead->next;
            }



        }
        return dummy.next;
    }
};
