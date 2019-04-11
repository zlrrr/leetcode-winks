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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1, *p2 = l2, *l3 = NULL, *pre = l3;
        while(p1 && p2){
            //������������ֵ�ɱȽ�ʱ
            ListNode *temp = new ListNode(0);
            if(p1->val > p2->val){ 
                temp->val = p2->val;
                p2 = p2->next;
            }else{
                temp->val = p1-> val;
                p1 = p1->next;
            }
            temp->next = NULL;
            //���½ڵ�temp���ú�val��next
            if(pre == NULL){
                pre = temp;
                l3 = temp;
            }else{
                pre->next = temp;
                pre = temp;
            }    
            //�ֱ������ڵ�Ϊ�׸��ڵ�ͷ��׸��ڵ�����
        }
        while(p1){
            ListNode *temp = new ListNode(0);
            temp->val = p1->val;
            temp->next = NULL;
            p1 = p1->next;
            if(pre == NULL){
                pre = l3 = temp;
            }else{
                pre->next = temp;
                pre = temp;
            }
        }
        while(p2){
            ListNode *temp = new ListNode(0);
            temp->val = p2->val;
            temp->next = NULL;
            p2 = p2->next;
            if(pre == NULL){
                pre = l3 = temp;
            }else{
                pre->next = temp;
                pre = temp;
            }
        }
        return l3;
    }
};
