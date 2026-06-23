class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next; // Move slow pointer by 1
            fast = fast->next->next; // Move fast pointer by 2
        }

        return slow; // Slow pointer will be at the middle node
    }
}