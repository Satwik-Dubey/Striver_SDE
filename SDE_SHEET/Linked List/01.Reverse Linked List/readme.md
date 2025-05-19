```
 ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=NULL){
            ListNode* Next=curr->next; // store next value so that after reversing we can move next
            curr->next=prev; // we change the pointer of curr to its prev
            prev=curr;// then we move prev one step forward i.e to curr
            curr=Next;// and then we move curr one step forward i.e Next
        }
        return prev;

```