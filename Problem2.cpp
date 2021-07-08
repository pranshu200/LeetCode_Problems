/*2. Add Two Numbers*/

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
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ListNode *temp=new ListNode(0);
        ListNode *result=temp;
        int carry=0;
        while(l1 || l2 || carry)
        {
            int num1=l1?l1->val:0; // To check if the value is not zero
            int num2=l2?l2->val:0;
            
            temp->next=new ListNode((num1+num2 +carry)%10);
            temp=temp->next;
            carry=(num1+num2+carry)/10;
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
            
        }
        return result->next;
    }
};