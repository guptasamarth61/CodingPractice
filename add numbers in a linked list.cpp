/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        if(l1==NULL and l2!=NULL) return l2;
        else if (l1!=NULL and l2==NULL) return l1;
        ListNode* head = new ListNode();
        ListNode* t = head;
        int n = (l1->val + l2->val)%10;
        int c = (l1->val + l2->val)/10;
        t->val = n;
        l1 = l1->next;
        l2 = l2->next;
        while(l1!=NULL and l2!=NULL){
            t->next = new ListNode((l1->val + l2->val + c)%10);
            c = ((l1->val + l2->val + c)/10);
            t = t->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1==NULL and l2!=NULL){
            while(l2!=NULL){
                t->next = new ListNode((l2->val + c)%10);
                c = (l2->val + c)/10;
                t = t->next;
                l2 = l2->next;
            }
        }
        else if(l1!=NULL and l2==NULL){
            while(l1!=NULL){
                t->next = new ListNode((l1->val + c)%10);
                c = (l1->val + c)/10;
                t = t->next;
                l1 = l1->next;
            }
        }
        if(c==1){
            ListNode* t2 = new ListNode(c);
            t->next = t2;
        }
        return head;
    }
};

//solution is way better
