//O(N/2)

class Solution{
public:
    ListNode* middleNode(ListNode* head) {
       ListNode* sp = head;
       ListNode* fp = head; 
       while(fp!=NULL && fp->next!=NULL)
       {
           sp=sp->next;
           fp=fp->next->next;
       }
       return sp;
}

};

