class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* tort = head;
        ListNode* hare = head;
        while(tort!=NULL and hare!=NULL and hare->next!=NULL){
            tort = tort->next;
            hare = hare->next->next;
            if(tort == hare) return true;
        }
        return false;
    }
};