//TC:O(n) - SC:O(1)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
      
        
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        while(curr!=NULL){
            ListNode* nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
           
        }
        return prev;
    }
};