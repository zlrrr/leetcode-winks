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
   /* //��ͷ�ڵ�����
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)return NULL;
        if(head->next == NULL)return head;
        ListNode *p = head->next, *q = p->next;
        p->next = NULL; 
        //����q��¼ͷ�ڵ�ĺ�̽ڵ��ͷ�ڵ��̽ڵ�����Ϊ��
        //�粻���ÿգ�����ֻ�·��ѭ��
        while(q){   //qָ����Ҫ��������׸��ڵ�,pָ�����������е�һ���ڵ�
            head->next = q; //ͷ�巨��������׽ڵ����
            q = q->next;    //ͷ�巨��ɺ������׽ڵ����
            head->next->next = p;   //��ǰ���е�һ���ڵ����ͷ�巨�ڵ��
            p = head->next; //p����Ϊ��ǰ���е�һ���ڵ�
        }
        return head;
    }*/
    //ֻ��ͷָ�룬����ͷ�ڵ�����
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)return NULL;
        if(head->next == NULL)return head;
        ListNode *p = head, *q = p->next;
        p->next = NULL; 
        //����q��¼ͷ�ڵ�ĺ�̽ڵ��ͷ�ڵ��̽ڵ�����Ϊ��
        //�粻���ÿգ�����ֻ�·��ѭ��
        while(q){   //qָ����Ҫ��������׸��ڵ�,pָ�����������е�һ���ڵ�
            head = q; //ͷ�巨��������׽ڵ����
            q = q->next;    //ͷ�巨��ɺ������׽ڵ����
            head->next = p;   //��ǰ���е�һ���ڵ����ͷ�巨�ڵ��
            p = head; //p����Ϊ��ǰ���е�һ���ڵ�
        }
        return head;
    }
};
