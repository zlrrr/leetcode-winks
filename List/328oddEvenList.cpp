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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)return head;
        ListNode *odd = head, *even = head->next;
        ListNode *oddtail = odd, *eventail = even;
        ListNode *remains = even->next;
        int flag = 1;//flagΪ1������odd���棬flagΪ0������even����
        while(remains){
            if(flag){//����odd����,��ʱremains��pre��eventail
                flag = 0;
                oddtail->next = remains;
                remains = remains->next;
                oddtail = oddtail->next;
                eventail->next = NULL;
            }else{//����even����,��ʱremains��pre��oddtail
                flag = 1;
                eventail->next = remains;
                remains = remains->next;
                eventail = eventail->next;
                oddtail->next = NULL;
            }
        }
        oddtail->next = even;
        return odd;
    }
};
