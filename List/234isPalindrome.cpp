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
    void reverseList(ListNode* prehead){
        if(!prehead->next || !prehead->next->next) return;
        ListNode *p = prehead->next, *q = p->next;
        p->next = NULL;
        while(q){
            prehead->next = q;
            //cout << p->val <<endl;
            q = q->next;
            prehead->next->next = p;
            p = prehead->next;
        }
    }
    
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)return true;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *fast = dummy, *low = fast;
        while(fast && fast->next){
            low = low->next;
            fast = fast->next->next;
        }
        //找到一半处
        reverseList(low);
        //传入的low结点是需要翻转链表的哑结点
        //while(low){
        //    cout << low->val<<endl;
        //    low = low->next;
        //}
        low = low->next;
        while(low){
            if(low->val != head->val){
                return false;
            }
            low = low->next;
            head = head->next;
        }
        return true;
    }
};
