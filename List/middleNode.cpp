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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL)return NULL;
        if(head->next == NULL)return head;
        ListNode* first = head, *second = head;
        int count = 0;
        while(first){
            first = first->next;
            ++count;
        }
        int step = count/2;
        while(step){
            second = second->next;
            --step;
        }
        return second;
    }
};
