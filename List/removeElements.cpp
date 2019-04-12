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
    ListNode* removeElements(ListNode* &head, int val) {
        ListNode *dummy = new ListNode(-1);
        //采用加入头节点的方法减少分类讨论 
        dummy->next = head;
        ListNode *p = head, *pre = dummy;
        while(p){
            if(val == p->val){
               pre->next = p->next;
               delete(p); 
            }else{
               pre = pre->next;
            }
            p = pre->next;
        }
        return dummy->next;
    }
};
