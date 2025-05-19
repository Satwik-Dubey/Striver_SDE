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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=NULL){
            ListNode* Next=curr->next; // store next value so that after reversing we can move next
            curr->next=prev; // we change the pointer of curr to its prev
            prev=curr;// then we move prev one step forward i.e to curr
            curr=Next;// and then we move curr one step forward i.e Next
        }
        return prev;
    }
};