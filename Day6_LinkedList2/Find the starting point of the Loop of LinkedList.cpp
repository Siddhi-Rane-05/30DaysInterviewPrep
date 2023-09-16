//TC:O(N) SC:O(1)


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       
        ListNode* sp=head;
        ListNode* fp=head;
        
        while(fp && fp->next)
        {
            fp=fp->next->next;
            sp=sp->next;
            if(fp==sp) 
            {
                sp=head; //assigning slow(entry pointer) to head again  
                while(sp!=fp)
                {
                    fp=fp->next;
                    sp=sp->next;
                }
                return sp;
            }
        }
       
        return nullptr;
    }
};