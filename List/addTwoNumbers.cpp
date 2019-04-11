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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1, *p2 = l2, *l3 = NULL, *pre = l3;
        int carry = 0;
        int sum;
        while(p1 && p2){
            sum = p1->val + p2->val + carry;
            if(sum > 9){
                carry = 1;
                sum -= 10;
            }else{
                carry = 0;
            }
            ListNode *temp = new ListNode(0);
            temp->val = sum;
            temp->next = NULL;
            if(pre == NULL){
                pre = temp;
                l3 = temp;
            }else{
                pre->next = temp;
                pre = temp;   
            }
            p1 = p1->next;
            p2 = p2->next;
        }
       while(p1){
            ListNode *temp = new ListNode(0);
            sum = p1->val + carry;
            if(sum > 9){
                sum -= 10;
                carry = 1;
            }else{
                carry = 0;   
            }
            temp->val = sum;
            temp->next = NULL;
             if(pre == NULL){
                pre = temp;
                l3 = temp;
            }else{
                pre->next = temp;
                pre = temp;   
            }
            p1 = p1->next;
       }
       while(p2){
            ListNode *temp = new ListNode(0);
            sum = p2->val + carry;
            if(sum > 9){
                sum -= 10;
                carry = 1;
            }else{
                carry = 0;   
            }
            temp->val = sum;
            temp->next = NULL;
            if(pre == NULL){
                pre = temp;
                l3 = temp;
            }else{
                pre->next = temp;
                pre = temp;   
            }
            p2 = p2->next;
       }
       if(carry == 1){
             ListNode *temp = new ListNode(0);
             temp->val = 1;
             temp->next = NULL;
             pre->next = temp; 
      }
    return l3;
    }
};
