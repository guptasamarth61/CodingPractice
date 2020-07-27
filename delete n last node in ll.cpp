public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        int l = 0;
        while(t1!=NULL){
            l++;
            t1 = t1->next;
        }
        if(n==l) return head->next;
        int c = 0;
        while((c+1) != (l-n)){
            head = head->next;
            c++;
        }
        head->next = (((head->next)==NULL) ? NULL : (head->next->next));
        return t2;
    }
};

//beautiful solution using 1 pass approach here: https://leetcode.com/problems/remove-nth-node-from-end-of-list/solution/