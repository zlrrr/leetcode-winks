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
        while(!end1 || !end2){//当指针1和2走完整个路程时跳出循环
            if(p1 == p2){     
                //当指针1和2指向同一地址，则输出此相交点
                return p1;
            }
            if(!p1 && !p1change){
                //当指针1走到末端并且没有换过线时，换线
                p1 = headB;
                p1change = true;
            }
            if(!p2 && !p2change){
                p2 = headA;
                p2change = true;
            }
            if(p1 == headA && p1change)return headA;
            if(p2 == headB && p2change)return headB;
            //如果在换线之后指针和初始位置重逢
            //则对应于一个链表完全从属于另一个链表的情况
            p1 = p1->next;
            p2 = p2->next;
        }
        return NULL;
    }
};
