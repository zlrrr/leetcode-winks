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
            //每次向后选择一个结点
            op = cnext;
            //op选中当前需要操作的结点
            cnext = cnext->next;
            pre = dummy;
            p = dummy->next;
            while(p->val < op->val && pre != ctail){
                //从头节点开始查找直到到达排序好的尾结点
                //或者找到恰好比op选中结点大的结点
                pre = pre->next;
                p = pre->next;
            }
            if(pre == ctail){
                //若插入到末尾，则只需调整ctail指向
                ctail = op;
            }else{
                //若插入到中间,则需要调整多个指针
                ctail->next = op->next;
                pre->next = op;
                op->next = p;
            }
        }
        return dummy->next;
    }
};
