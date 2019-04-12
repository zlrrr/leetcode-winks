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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head == NULL)return NULL;
        if(head->next == NULL)return head;
        ListNode *first = head, *p = NULL,*q = NULL, *tail = NULL;
        int flag = m;
        int k = n-m;
        while(m > 2){
            first = first->next;
            --m;
        }
        if(first == NULL || first->next == NULL)return head;
        if(flag == 1){
            p = head;
        }else{
            p = first->next;
        }
        q = p->next;
        tail = p;
        if(flag == 1){
            while(q && k){
            tail->next = q->next;
            head = q;
            q = q->next;
            head->next = p;
            p = head;
            --k;
            }
        }else{
            while(q && k){
            tail->next = q->next;
            first->next = q;
            q = q->next;
            first->next->next = p;
            p = first->next;
            --k;
            }
        }
        return head;
    }
};
