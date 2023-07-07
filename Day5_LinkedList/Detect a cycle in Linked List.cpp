class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
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