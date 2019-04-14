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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *p = head;
        int length = 1;
        //����һ���㳤�Ⱥͽ���β
        while(p->next){
            p = p->next;
            ++length;
        }
        p->next = head;
        k =length - (k%length);
        //������k����pָ��β�ͽڵ�
        while(k > 0){
            p = p->next;
            --k;
        }
        dummy->next = p->next;
        p->next = NULL;
        return dummy->next;
    }
};
