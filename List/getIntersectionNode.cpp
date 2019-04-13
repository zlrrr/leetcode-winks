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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)return NULL;
        ListNode *p1 = headA, *p2 = headB;
        bool p1change = false, p2change = false;
        bool end1 = false, end2 = false;
        while(!end1 || !end2){//��ָ��1��2��������·��ʱ����ѭ��
            if(p1 == p2){     
                //��ָ��1��2ָ��ͬһ��ַ����������ཻ��
                return p1;
            }
            if(!p1 && !p1change){
                //��ָ��1�ߵ�ĩ�˲���û�л�����ʱ������
                p1 = headB;
                p1change = true;
            }
            if(!p2 && !p2change){
                p2 = headA;
                p2change = true;
            }
            if(p1 == headA && p1change)return headA;
            if(p2 == headB && p2change)return headB;
            //����ڻ���֮��ָ��ͳ�ʼλ���ط�
            //���Ӧ��һ��������ȫ��������һ����������
            p1 = p1->next;
            p2 = p2->next;
        }
        return NULL;
    }
};
