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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)return NULL;
        if(head->next == NULL)return head;
        ListNode* p1 = head, *p2 = head->next;
        int front = p1->val;
        while(p2){
            if(p2->val == front){ //����p2��p1ֵ��ͬ����ɾ��p2,p1���ƶ�
                p1->next = p2->next;
                delete(p2);
            }else{       //����p2��p1��ͬ�����޸�front��p1���ƣ�
                front = p2->val;
                p1 = p1->next;
            }
            p2 = p1->next;
        }
        return head;
    }
};
