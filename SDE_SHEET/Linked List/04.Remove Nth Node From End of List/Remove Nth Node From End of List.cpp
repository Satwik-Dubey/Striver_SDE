class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;

        // Step 1: Calculate length of the linked list
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }

        // Step 2: Check if n is valid
        if (n > len) return nullptr;

        // Step 3: Handle edge case: removing head
        if (n == len) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Step 4: Traverse to the node before the one to be removed
        temp = head;
        for (int i = 1; i < len - n; i++) {
            temp = temp->next;
        }

        // Step 5: Remove the nth node from end
        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

        return head;
    }
};
