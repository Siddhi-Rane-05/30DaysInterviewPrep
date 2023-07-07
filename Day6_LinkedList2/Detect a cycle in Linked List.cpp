//O(N)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL &&  head==NULL) return false;
        unordered_map<ListNode*,int>map;
        
        while (head!=NULL)
        {
            if (map.find(head) != map.end()) {
                return true;
            }
            map[head] = true; //to indicate that the current node i.e head has been visited
            head=head->next;
        }
    return false; 
    }
};

//O(1)


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL && head->next==NULL) return false;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next && fast->next->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) return true;
        }
    return false;

    }
};

