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
    bool hasCycle(ListNode *head) {
        ListNode *fast = head, *low = head;
        while(1){
            if(fast == NULL || fast->next == NULL)return false;
            fast = fast->next->next;
            low = low->next;
            if(fast == low)return true;
        }
    }
};
