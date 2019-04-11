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
            if(p2->val == front){ //发现p2与p1值相同，则删除p2,p1不移动
                p1->next = p2->next;
                delete(p2);
            }else{       //发现p2与p1不同，则修改front，p1后移；
                front = p2->val;
                p1 = p1->next;
            }
            p2 = p1->next;
        }
        return head;
    }
};
