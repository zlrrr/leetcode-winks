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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *first = head, *second = head;
        for(int i = 0; i < n; ++i){
            if(first == NULL){
                return NULL;
            }//����Խ�����
            first = first->next;
        }
        if(first == NULL){
            head = second->next;
            delete(second);
            return head;
        }//����ɾ��ͷ�ڵ����
        while(first->next){
            first = first->next;
            second = second->next;
        }
        first = second->next;
        second->next = second->next->next;
        delete(first);
        return head;
    }
};
