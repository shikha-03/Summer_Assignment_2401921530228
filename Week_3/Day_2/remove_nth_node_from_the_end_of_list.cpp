class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // move fast n+1 steps
        for(int i = 0; i <= n; i++){
            fast = fast->next;
        }

        // move both until fast reaches end
        while(fast != nullptr){
            fast = fast->next;
            slow = slow->next;
        }

        // delete nth node
        ListNode* del = slow->next;
        slow->next = slow->next->next;
        delete del;

        return dummy->next;
    }
};
