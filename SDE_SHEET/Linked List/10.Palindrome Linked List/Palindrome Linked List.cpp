class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return true;

        // 1. Find middle using slow and fast pointers
        ListNode *slow = head, *fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse the second half of the list starting from slow
        ListNode* prev = nullptr;
        while(slow != nullptr){
            ListNode* next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

        // 3. Compare both halves
        ListNode* first = head;
        ListNode* second = prev;
        while(second != nullptr){
            if(first->val != second->val)
                return false;
            first = first->next;
            second = second->next;
        }

        return true;
    }
};