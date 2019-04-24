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
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *cnext = head->next, *ctail = head, *op, *pre, *p;
        while(cnext){
            //ÿ�����ѡ��һ�����
            op = cnext;
            //opѡ�е�ǰ��Ҫ�����Ľ��
            cnext = cnext->next;
            pre = dummy;
            p = dummy->next;
            while(p->val < op->val && pre != ctail){
                //��ͷ�ڵ㿪ʼ����ֱ����������õ�β���
                //�����ҵ�ǡ�ñ�opѡ�н���Ľ��
                pre = pre->next;
                p = pre->next;
            }
            if(pre == ctail){
                //�����뵽ĩβ����ֻ�����ctailָ��
                ctail = op;
            }else{
                //�����뵽�м�,����Ҫ�������ָ��
                ctail->next = op->next;
                pre->next = op;
                op->next = p;
            }
        }
        return dummy->next;
    }
};
