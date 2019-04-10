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
   /* //带头节点的情况
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)return NULL;
        if(head->next == NULL)return head;
        ListNode *p = head->next, *q = p->next;
        p->next = NULL; 
        //在用q记录头节点的后继节点后，头节点后继节点设置为空
        //如不设置空，则出现环路死循环
        while(q){   //q指向需要被逆向的首个节点,p指向已逆序序列第一个节点
            head->next = q; //头插法将逆向的首节点插入
            q = q->next;    //头插法完成后将逆向首节点后移
            head->next->next = p;   //当前序列第一个节点插入头插法节点后
            p = head->next; //p重置为当前序列第一个节点
        }
        return head;
    }*/
    //只有头指针，不带头节点的情况
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)return NULL;
        if(head->next == NULL)return head;
        ListNode *p = head, *q = p->next;
        p->next = NULL; 
        //在用q记录头节点的后继节点后，头节点后继节点设置为空
        //如不设置空，则出现环路死循环
        while(q){   //q指向需要被逆向的首个节点,p指向已逆序序列第一个节点
            head = q; //头插法将逆向的首节点插入
            q = q->next;    //头插法完成后将逆向首节点后移
            head->next = p;   //当前序列第一个节点插入头插法节点后
            p = head; //p重置为当前序列第一个节点
        }
        return head;
    }
};
