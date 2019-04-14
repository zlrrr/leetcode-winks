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
    ListNode *swap2(ListNode *pre_head){
        //����ڵ�Ϊ��ʼ������ǰһ���ڵ�
        //�����ڵ㣬����ɹ�������β�ͽڵ㣬ʧ�ܷ���NULL
        ListNode *head = pre_head->next, *tail = head;
        if(!head || !head->next)return NULL;//ֻʣ��0��1���ڵ㣬������
        head = head->next;
        tail->next = head->next;
        pre_head->next = head;
        head->next = tail;
        return tail;
    }
    
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *last_tail = swap2(dummy);
        //��ȡ��һ�ν�����β�ͽڵ�
        while(last_tail){
            //�����һ�ν����ɹ��������ʧ�����������
            last_tail = swap2(last_tail);
        }
        return dummy->next;
    }
};
