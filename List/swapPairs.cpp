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
        //输入节点为开始交换的前一个节点
        //交换节点，如果成功，返回尾巴节点，失败返回NULL
        ListNode *head = pre_head->next, *tail = head;
        if(!head || !head->next)return NULL;//只剩下0或1个节点，不交换
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
        //获取第一次交换的尾巴节点
        while(last_tail){
            //如果上一次交换成功则继续，失败则结束交换
            last_tail = swap2(last_tail);
        }
        return dummy->next;
    }
};
