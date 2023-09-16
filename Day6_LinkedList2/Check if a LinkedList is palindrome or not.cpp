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
    ListNode* reverseLinkedList(ListNode* head)
    {
        ListNode* prev = nullptr;

        while (head != nullptr) 
        {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL  || head->next==NULL)
        {
            return true;
        }
        ListNode* sp=head;
        ListNode* fp=head;

        while(fp!=NULL && fp->next!=NULL)
        {
            sp=sp->next;
            fp=fp->next->next;
        }
         
        ListNode* reversedSecondHalf = reverseLinkedList(sp);

        ListNode* p1 = head;
        ListNode* p2 = reversedSecondHalf;
        while (p1 != nullptr && p2 != nullptr) {
        if (p1->val != p2->val) {
            return false; // Not a palindrome
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    return true; // It's a palindrome
}
};