class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* next = NULL;

            while (curr != NULL) {
                next = curr->next; // Store the next node
                curr->next = prev; // Reverse the link
                prev = curr;       // Move prev to current node
                curr = next;       // Move to the next node
            }

            return prev; // New head of the reversed list
        }
}